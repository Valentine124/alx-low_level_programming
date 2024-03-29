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

	if (str == NULL)
		return (NULL);

	while (str[c++])
		strlen++;

	arr = malloc(sizeof(char) * (strlen + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= strlen - 1; i++)
	{
		arr[i] = str[i];
	}

	return (arr);
}
