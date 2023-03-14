#include <stdlib.h>
#include "main.h"

/**
 * create_array - crearte an array of character
 *
 * @size: size of the array
 *
 * @c: the array character
 *
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i <= size - 1; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
