#include "lists.h"

/**
 * add_dnodeint - Addsa node to the start of a linked list
 * @head: the head of the linked list
 * @n: the data you want to add
 *
 * Return: The address of the element added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(*new));

	if (new == NULL)
		return (NULL);

	new->n = n;

	new->prev = NULL;
	new->next = *head;
	*head = new;

	return (new);
}
