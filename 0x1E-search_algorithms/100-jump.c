#include "search_algos.h"
#include <math.h>

/**
 * jump_search - The implementation
 * @array: The list to search
 * @size: The length of the list
 * @value: The value to search for
 * Return: The first index of value or NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, i, j;

	if (array == NULL)
		return (-1);

	step = sqrt(size - 1);

	for (i = 0; i < size; i += step)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i + step] >= value || i >= size - 1)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i, i + step);

			for (j = i; (j <= i + step) && (j < size); j++)
			{
				printf("Value checked array[%ld] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
			break;
		}
	}

	return (-1);
}
