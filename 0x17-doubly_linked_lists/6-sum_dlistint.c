#include "lists.h"

/**
 * sum_dlistint - sum all value of a linked list
 * @head: the list
 *
 * Return: sum of list
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
