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
	listint_t *temp = *head;

	while (temp != NULL)
	{
		listint_t *next = temp->next;

		temp->next = prev;
		prev = temp;
		temp = next;
	}

	*head = prev;

	return (prev);
}
