#include "main.h"

void err_msg(char *msg, int status, char *av);

/**
 * main - Program entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 Success
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, r_from, w_to;
	char *buff = malloc(sizeof(char) * 1024);
	int total_r_from = 0;
	ssize_t size = 1024;

	if (argc != 3 || buff == NULL)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	r_from = read(fd_from, buff, size);

	while (r_from != 0)
	{
		total_r_from += r_from;
		
		if (total_r_from >= size)
		{
			buff = realloc(buff, 10);
		}

		r_from = read(fd_from, buff + total_r_from, size);

		if (r_from == -1)
			err_msg("Error: Can't read from %s\n", 98, argv[1]);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	w_to = write(fd_to, buff, total_r_from);

	if (fd_to == -1 || w_to == -1)
		err_msg("Error: Can't write to %s\n", 99, argv[2]);

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Erro: Can't close fd %d\n", fd_from);
		exit(100);
	}
	else if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	free(buff);
	return (0);
}

/**
 * err_msg - display error messages
 * @msg: the message
 * @status: exit status
 * @av: arguments list
 */
void err_msg(char *msg, int status, char *av)
{
	dprintf(STDERR_FILENO, msg, av);
	exit(status);
}
