#include<string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - add a new node to the begening of the list
 * @head: the first node
 * @str: string to be duplicated
 * Return: address of the new node or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	unsigned int len;

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

	new->next = *head;
	new->str = dup;
	new->len = len;
	*head = new;

	return (new);
}
