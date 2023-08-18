#include "lists.h"

/**
 * free_dlistint - free a linked list
 * @head: the list
 */
void free_dlistint(dlistint_t *head)
{
	if (head->next)
		free_dlistint(head->next);

	free(head);
	head = NULL;
}
