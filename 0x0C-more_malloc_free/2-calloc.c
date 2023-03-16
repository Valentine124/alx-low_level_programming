#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocate memory for an array
 *
 * @nmemb: the number of element
 *
 * @size: the size of each element
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;

	return (arr);
}
