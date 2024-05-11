#include "search_algos.h"

/**
 * interpolation_search - implementation of the algorithm
 * @array: The List to search
 * @size: Length of the list
 * @value: The value to search for
 *
 * Return: First index of value or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t first, last, prob;

	if (array == NULL)
		return (-1);

	first = 0;
	last = size - 1;

	while (first < last)
	{
		prob = first + (((double)(last - first) /
					(array[last] - array[first])) * (value - array[first]));

		if (prob > size - 1)
		{
			printf("Value checked array[%ld] is out of range\n", prob);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", prob, array[prob]);
		if (array[prob] == value)
			return (prob);
		if (array[prob] > value)
		{
			last = prob - 1;
			continue;
		}
		else
		{
			first = prob + 1;
			continue;
		}
	}

	return (-1);
}
