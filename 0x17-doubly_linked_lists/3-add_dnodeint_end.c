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

	new = malloc(sizeof(*new));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if(*head == NULL)
	{
		new->prev = NULL;
		*head = new;

		return (new);
	}

	tail = *head;

	while (tail->next)
		tail = tail->next;

	new->prev = tail;
	tail->prev = new;

	return (new);
}
