#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free the list and set head to `NULL`
 * @head: the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *tp;
	listint_t **t = head;

	if (t == NULL)
		return;

	while (*head)
	{
		tp = (*head)->next;
		free(*head);
		*head = tp;
	}

	*head = NULL;
}
