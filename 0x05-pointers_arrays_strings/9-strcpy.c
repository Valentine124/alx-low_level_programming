#include <string.h>

/**
 * _strcpy - copies one pointer to another
 * @dest: the first pointer
 * @src: the second pointer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
