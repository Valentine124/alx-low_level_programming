#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - create a file
 * @filename: the file name
 * @text_content: the content of the file
 * Return: if success `1` else `-1`
 */
int create_file(const char *filename, char *text_content)
{
	int f, w, c = 0, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[c++])
			len++;
	}

	f = open(filename, O_RDWR | O_CREAT | O_TRUNC, 600);
	w = write(f, text_content, len);

	if (f == -1 || w == -1)
		return (-1);

	close(f);

	return (1);
}
