#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a: array of intergers
 * @n: number of element in array
 */
void reverse_array(int *a, int n)
{
	int i, h;

	for (i = 0; i < (n / 2); 1++)
	{
		h = a[i];
		a[i] = a[n - i - 1];
		a[n -i - 1] = h;
	}
}
