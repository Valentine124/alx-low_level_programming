#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free linked list memories
 * @head: head of the list
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	if (temp->next == NULL)
		free(temp);
	else
		free_list(temp->next);
}
