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
	char *arr;
	int strlen = 0, c = 0, i;

	while (str[c++])
		strlen++;

	arr = malloc(sizeof(char) * strlen);

	if (str == NULL || ar == NULL)
		return (NULL);

	for (i = 0; i <= strlen - 1; i++)
	{
		arr[i] = str[i];
	}

	return (arr);
}
