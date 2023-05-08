#include "main.h"

/**
 * create_file - create a file
 * @filename: the file name
 * @text_content: the file content
 *
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w;
	int len = 0, c = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[c++])
			len++;

		fd = open(filename, O_WRONLY | O_TRUNC, 0600);
		w = write(fd, text_content, len);
	}
	else
	{
		fd = open(filename, O_WRONLY | O_TRUNC, 0600);
		w = write(fd, text_content, len);
	}

	if (fd == -1 || w == -1)
		return (-1);

	return (1);
}
