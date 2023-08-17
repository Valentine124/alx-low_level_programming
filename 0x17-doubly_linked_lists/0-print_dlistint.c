#include "lists.h"

/**
 * print_dlistint - print all element in a linked list
 * @h: the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_dlidtint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t len = 0;

	if (h == NULL)
		return (0);

	temp = h;

	while (temp)
	{
		len += 1;
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	return (len);
}
