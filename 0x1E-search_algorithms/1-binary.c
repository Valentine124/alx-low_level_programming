#include "search_algos.h"

/**
 * binary_search - binary search implementation
 * @array: The list to search from
 * @size: lenght of the list
 * @value: The value to search for
 *
 * Return: The index of value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t middle;
	int first = 0, last = size - 1;

	if (array == NULL)
		return (-1);

	while (first <= last)
	{
		middle = (first + last) / 2;

		if (array[middle] == value)
		{
			print_array(array, first, last);
			return (middle);
		}

		print_array(array, first, last);

		if (array[middle] > value)
		{
			last = middle - 1;
			continue;
		}

		if (array[middle] < value)
		{
			first = middle + 1;
			continue;
		}
	}

	return (-1);
}

/**
 * print_array - prints the values of an array seperated by comma
 * @first: the first element of the array
 * @last: The last element of the array
 * @arr: The array
 */
void print_array(int *arr, int first, int last)
{
	int i;

	if (arr == NULL)
		return;

	printf("Searching in array: ");

	for (i = first; i <= last; i++)
	{
		if (i == last)
			printf("%d\n", arr[i]);
		else
			printf("%d, ", arr[i]);
	}
}
