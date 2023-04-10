#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - read a text file and print it.
 * @filename: the name of the file
 * @letters: the nubers of letters to be read
 * Return: the number of letters read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, sz, w;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(letters * sizeof(char));
	if (buff == NULL)
		return (0);

	f = open(filename, O_RDWR);
	sz = read(f, buff, letters);
	w = write;

	if (f == -1 && sz == -1 && w = -1)
	{
		free(buff);
		return (0);
	}

	return (sz);


}
