#include "search_algos.h"

/**
 * jump_search - Jump search implementation
 * @array: The array to search from
 * @size: The length of the array
 * @value: The value to search for
 *
 * Return: The index of value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, j;
	int jump;

	if (array == NULL)
		return (-1);

	jump = sqrt(size);
	for (i = 0; i < size; i += jump)
	{
		if (array[i] >= value)
		{
			if (i == size - 1)
			{
				printf("Value found between indexes [%ld] and [%ld]\n", i, i + jump);
				break;
			}
			printf("Value found between indexes [%ld] and [%ld]\n", i - jump, i);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (i >= size - 1)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i, i + jump);
			return (-1);
		}
	}

	for (j = i - jump; j <= i; j++)
	{
		if (i == size - 1)
			j = i;
		if (array[j] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", j, array[j]);
			return (j);
		}
		else
			printf("Value checked array[%ld] = [%d]\n", j, array[j]);
	}
	return (-1);
}
