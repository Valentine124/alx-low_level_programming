#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free the list and set head to `NULL`
 * @head: the first node
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	if (*head->next == NULL)
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		free_listint2(*head->next);
	}
}
