#include "search_algos.h"

/**
  * linear_search - implements the linear search algorithm
  * @array: The list to search from
  * @size: The length of the list
  * @value: The value to search for
  * Return: Index where value is located
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
