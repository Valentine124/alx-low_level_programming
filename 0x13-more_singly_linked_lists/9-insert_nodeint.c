#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - add a node to an index
 * @head: the first node
 * @idx: the index
 * @n: the data to be added
 * Return: the address of the data added or `NULL`
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp;
	listint_t *prev;

	if (new == NULL)
		return (NULL);
	if (*head == NULL && head == NULL)
		return (NULL);

	temp = *head;

	while (temp != NULL && count < idx)
	{
		prev = temp;
		temp = temp->next;
		count++;
	}

	if (idx > count)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = temp;
	prev->next = new;

	return (new);
}
