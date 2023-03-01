#include "main.h"
#include <stdio.h>

/**
 * print_array - print element in an array
 * @a: the array
 * @n: number of element to be printed
 */
void print_array(int *a, int n)
{
	int i = 0, len = 0;

	while (a[i++])
		len++;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", a[i]);
		}
		printf("%d, ", a[i]);
	}
}
