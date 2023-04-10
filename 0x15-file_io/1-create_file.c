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
	int f, w;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_RDWR | O_CREAT | O_TRUNC, 600);
	
	if (text_content != NULL)
		w = write(f, text_content, strlen(text_content));
	
	if (f == -1 || w == -1)
		return (-1);

	close(f);

	return (1);
}
