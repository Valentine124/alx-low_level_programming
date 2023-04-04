#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a linked list
 * @head: the first node
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	if (head == NULL)
		free(head);
	else
		free_listint(head->next);
}
