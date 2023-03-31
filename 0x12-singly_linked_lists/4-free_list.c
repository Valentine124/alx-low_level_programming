#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free linked list memories
 * @head: head of the list
 */
void free_list(list_t *head)
{
	list_t *temp = head;
	list_t *next;

	while (temp != NULL)
	{
		next = temp->next;
		free(head->str);
		free(temp);
		temp = next;
	}
}
