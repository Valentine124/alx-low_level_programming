#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add a node to rhe end of a linked list
 * @head: the first node
 * @str: the string to the node
 * Return: address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	char *dup;
	list_t *last;

	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	dup = strdup(str);

	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len]; len++)
		;
	new->str = dup;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;

		while (last->next != NULL)
			last = last->next;

		last->next = new;
	}

	return (new);
}
