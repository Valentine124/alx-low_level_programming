#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: the string
 * @c: the character to locate
 * Return: pointer to first occurrance or NULL
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
