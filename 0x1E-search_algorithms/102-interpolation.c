#include "search_algos.h"

/**
 * interpolation_search - The implementation of the algorithm
 * @array: The list to search from
 * @size: The length of the list
 * @value: The value to search for
 * Return: The index where value is located or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));

		if (pos > size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		else
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (value == array[pos])
			return (pos);
		else if (value >= array[pos + 1])
			low = pos + 1;
		else if (value <= array[pos - 1])
			high = pos - 1;
	}

	return (-1);
}
