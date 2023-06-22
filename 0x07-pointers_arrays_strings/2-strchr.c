#include "main.h"

/**
 * _strchr - get the address of a character
 * @s: the string
 * @c: the character
 * Return: a pointer to the character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (NULL);
}
