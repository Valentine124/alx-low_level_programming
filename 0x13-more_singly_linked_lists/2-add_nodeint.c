#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add node at the beginning
 *
 * @head: the first node
 *
 * @n: data to be added
 *
 * Return: the address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
