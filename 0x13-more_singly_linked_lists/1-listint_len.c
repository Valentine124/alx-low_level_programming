#include "lists.h"

/**
 * listint_len - lenght of linked list
 *
 * @h: the first node
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *tmp = h;

	if (tmp != NULL)
	{
		do {
			len++;
			tmp = tmp->next;
		} while (tmp != NULL);
	}

	return (len);
}
