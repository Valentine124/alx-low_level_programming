#include <stdlib.h>
#include "main.h"

/**
 * _strdup - print duplicate
 *
 * @str: the string to duplicate
 *
 * Return: a pointer or NULL
 */
char *_strdup(char *str)
{
	char *s;
	int i, c, e, len;

	if (str == NULL)
	{
		return (NULL);
	}

	c = 0;
	len = 0;

	while (str[c++])
		len++;

	s = malloc(sizeof(char) * (len + 1));

	for (i = 0; i <= len - 1; i++)
	{
		s[i] = str[i];
	}


	s[i + 1] = 0;

	return (s);
}
