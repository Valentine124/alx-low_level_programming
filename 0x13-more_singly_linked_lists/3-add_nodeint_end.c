#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add node at the end of the list
 * @head: the first node in the list
 * @n: the data to be inserted
 *
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *tail;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		tail = *head;

		while (tail->next != NULL)
			tail = tail->next;

		tail->next = new;
	}

	return (new);
}
