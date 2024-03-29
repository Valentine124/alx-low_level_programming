#include "main.h"

/**
 * append_text_to_file - add text to the end of a file
 * @filename: name of file
 * @text_content: content to add
 *
 * Return: 1 on success or 0 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0, c = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[c++])
			len++;

		fd = open(filename, O_WRONLY | O_APPEND);
		w = write(fd, text_content, len);
	}
	else
	{
		fd = open(filename, O_WRONLY | O_APPEND);
	}

	if ((fd == -1) || (w == -1))
		return (-1);

	return (1);
}
