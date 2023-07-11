#include "main.h"

/**
 * read_textfile - read a text file and print to stdout
 * @filename: name of the file
 * @letters: numger of letter to be read
 *
 * Return: number of byte read 0r 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buff = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	r = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	if ((fd == -1) | (r == -1) | (w == -1))
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(fd);

	return (r);
}
