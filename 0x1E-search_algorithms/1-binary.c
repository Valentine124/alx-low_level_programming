#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - The implementation of the algorithm
 * @array: The list to search from
 * @size: The length of the list
 * @value: The value to search for
 * Return: The index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, first, last;

	if (array == NULL)
		return (-1);

	first = 0;
	last = size - 1;

	while (first <= last)
	{
		printf("Searching in array: ");
		print_arr(array, first, last);

		mid = (first + last) / 2;

		if (value == array[mid])
			return (mid);
		else if (value >= array[mid + 1])
			first = mid + 1;
		else if (value <= array[mid - 1])
			last = mid - 1;
	}

	return (-1);
}

/**
 * print_arr - prints the values of an array
 * @arr: The arry to print
 * @first: The first element
 * @last: The last element
 */
void print_arr(int *arr, size_t first, size_t last)
{
	size_t i;

	if (arr == NULL)
		return;

	for (i = first; i <= last; i++)
	{
		if (i == last)
			printf("%d\n", arr[i]);
		else
			printf("%d, ", arr[i]);
	}
}
