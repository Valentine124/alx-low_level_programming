#include "main.h"

/**
 * _memcpy - copy to a location
 * @dest: buffer to copy to
 * @src: buffer to copy from
 * @n: number of byte to copy
 * Return: the buffer 'b'
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
