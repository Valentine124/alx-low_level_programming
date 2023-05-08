#include "main.h"

/**
 * read_textfile - read a text file and print to stdout
 * @filename: Name of file
 * @letters: Number of letters to be read
 *
 * Return: Number of byte read or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buff = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	r = read(fd, buff, letters);

	if (fd == -1 || r == -1)
		return (0);

	w = write(1, buff, strlen(buff));

	if (w == -1)
		return (0);

	return (r);
}
