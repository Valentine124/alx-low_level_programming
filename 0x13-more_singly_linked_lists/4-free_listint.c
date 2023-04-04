#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a linked list
 * @head: the first node
 */
void free_listint(listint_t *head)
{
	listint_t *tp;

	while (head)
	{
		tp = head->next;
		free(head);
		head = tp;
	}
}
