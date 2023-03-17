#include <stdlib.h>
#include "main.h"

/**
 * array_rane - create an array result
 *
 * @min: the min number
 *
 * @max: the max number
 *
 * Return: array of a
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, j = 0;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return NULL;

	for (i = min; i <= max; i++)
	{
		arr[j] = i;
		j++;
	}

	return (arr);
}
