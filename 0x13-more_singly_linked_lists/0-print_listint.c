#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print element in a linked list
 *
 * @h: the first element of the list
 *
 * Return: Numbers of nodes (elements)
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	const listint_t *temp = h;

	if (temp == NULL)
		return (0);

	do {
		printf("%d\n", temp->n);
		n++;
		temp = temp->next;
	} while (temp != NULL);

	return (n);
}
