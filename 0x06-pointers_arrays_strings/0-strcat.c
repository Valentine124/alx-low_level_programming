#include <string.h>

/**
 * _strcat - concatenate two string
 * @dest: first string to concate
 * @src: second string
 * Return: pointer of string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
