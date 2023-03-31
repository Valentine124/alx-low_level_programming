#include<string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - add a new node to the begening of the list
 * @h: the first node
 * @str: string to be duplicated
 * Return: address of the new node or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->next = *head;
	new->str = strdup(str);
	*head = new;

	return (new);
}
