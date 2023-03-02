#include "main.h"

/**
 * _strncat - concatenate two string
 * @dest: string one
 * @src: string two
 * @n: number of element to contenate in
 * Return: pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
	{
		dest[i] = src[c];
	}

	return (dest);
}
