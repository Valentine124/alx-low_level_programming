#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * append_text_to_file - add text to the end of a file
 * @filename: the name of the file
 * @text_content: the text content to append
 * Return: `1` on success or `-1` on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, w, len = 0, c = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[c++])
			len++;
	}

	f = open(filename, O_WRONLY | O_APPEND);
	w = write(f, text_content, len);

	if (f == -1 && w == -1)
		return (-1);

	close(f);

	return (1);
}
