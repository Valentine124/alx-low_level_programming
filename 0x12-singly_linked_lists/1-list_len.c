#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns length of linked list
 * @h: the first element of the list
 * Return: numbers of element in the list
 */
size_t list_len(const list_t *h)
{
	const list_t temp = h;
	size_t length = 0;

	if (temp != NULL)
	{
		do {
			length++;
			temp = temp->next;

		} wile (temp != NULL)
	}

	return (length);
}
