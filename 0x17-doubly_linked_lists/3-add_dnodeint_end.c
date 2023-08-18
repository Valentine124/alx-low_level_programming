#include "lists.h"

/**
 * add_dnodeint_end - Adds a node to the end of the list
 * @head: the list head
 * @n: the node to add
 *
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tail;

	if (*head == NULL)
		return (NULL);

	new = malloc(sizeof(*new));

	if (new == NULL)
		return (NULL);

	tail = *head;

	while (tail->next)
		tail = tail->next;

	new->n = n;
	new->next = NULL;
	new->prev = tail;
	tail->prev = new;

	return (new);
}
