#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at a given index
 * @head: The list
 * @idx: The index to insert at
 * @n: the value to insert
 *
 * Return: node inserted or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int count = 0;

	new = malloc(sizeof(*new));

	if (new == NULL)
		return (NULL);

	new->n = n;

	temp = *head;

	while (temp)
	{
		if (count == idx)
		{
			(temp->prev)->next = new;
			new->prev = (temp->prev)->next;
			new->next = temp;
			temp->prev = new;

			return (new);
		}
	}

	return (NULL);
}
