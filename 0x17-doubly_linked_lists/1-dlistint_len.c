#include "lists.h"

/**
 * dlistint_len - get the number of element in a linked list
 * @h: the list
 *
 * Return: number of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t len = 0;

	if (h == NULL)
		return (0);

	temp = h;

	while (temp)
	{
		len += 1;
		temp = temp->next;
	}

	return (len);
}
