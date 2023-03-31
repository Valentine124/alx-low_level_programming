#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free linked list memories
 * @head: head of the list
 */
void free_list(list_t *head)
{
	if (head->next == NULL)
		free(head);
	else
		free_list(head->next);
}
