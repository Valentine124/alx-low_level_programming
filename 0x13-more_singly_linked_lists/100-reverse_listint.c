#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: the first node of the origal list
 * Return: the first of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *temp = NULL;

	while (temp != NULL)
	{
		temp->next = prev;
		prev = temp;
		temp = temp->next
	}

	*head = prev;

	return (prev);
}
