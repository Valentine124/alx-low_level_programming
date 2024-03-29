#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - remove the first node
 * @head: the first node
 * Return: the node removed
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL)
		return (0);

	if (*head == NULL)
		return (0);

	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;

	return (n);
}
