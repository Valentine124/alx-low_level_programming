#include "main.h"

/**
 * main - program entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Discription: The the program will take in two arguments
 * from the terminal and copy the content of the first to
 * the second
 * Usage: cp file_from file_to
 *
 * Return: success 0
 */
int main(int argc, char **argv)
{
	int fd1, fd2, r, w;
	ssize_t size = 1024;
	char *buff = malloc(sizeof(char) * size);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);
	r = read(fd1, buff, 1);

	if (fd1 == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	w = write(fd2, buff, r);

	if (fd2 == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", argv[2]);
		exit(99);
	}

	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd \n");
		exit(100);
	}

	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd \n");
		exit(100);
	}

	free(buff);
	return (0);

}
