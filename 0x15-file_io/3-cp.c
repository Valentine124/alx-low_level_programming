#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFF_SIZE 1024

void check_args(int c);
void error_message(char *msg, int code);

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument values
 * Return: Success 0
 *
 * Description: Should have exactly 4 arguments when running the program
 * else exit with code 97 and print `Usage cp file_from file_to
 */
int main(int argc, char **argv)
{
	char buff[BUFF_SIZE];
	int f_f, f_t, w, r;
	int cf, ct;

	check_args(argc);

	f_f = open(argv[1], O_RDONLY);
	r = read(f_f, buff, BUFF_SIZE);
	f_t = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);

	if (f_t == -1 || f_t == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from %s\n", argv[1]);
		exit(98);
	}

	if (f_t == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}

	while (r > 0)
	{
		w = write(f_t, buff, r);

		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			exit(99);
		}

		r = read(f_f, buff, BUFF_SIZE);
	}

	cf = close(f_f);
	ct = close(f_t);

	if (cf == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", cf);
		exit(100);
	}

	if (ct == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", ct);
		exit(100);
	}

	return (0);
}

/**
 * check_args - check if argument is greather than 3
 * @c: the argument count
 */
void check_args(int c)
{
	if (c != 3)
	{
		error_message("Usage: cp file_from file_to", 97);
	}
}

/**
 * error_message - print error meassages
 * @msg: the message
 * @code: the code for exiting
 */
void error_message(char *msg, int code)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(code);
}
