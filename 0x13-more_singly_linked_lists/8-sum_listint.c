#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sum the data in a linked list
 * @head: the first node
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
