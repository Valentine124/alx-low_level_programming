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
	int i, c, len;

	c = 0;
	len = 0;

	while (str[c++])
		len++;

	s = malloc(sizeof(str));

	if (s == NULL)
		return (NULL);

	for (i = 0; i <= len - 1; i++)
		s[i] = str[i];

	return (s);
}
