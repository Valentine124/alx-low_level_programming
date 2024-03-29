#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at index
 * @head: the first node
 * @index: index to be removed
 * Return: 1 on success or -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *prev = NULL;
	listint_t *temp = NULL;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && count < index)
	{
		prev = temp;
		temp = temp->next;
		count++;
	}

	if (index > count)
		return (-1);

	prev->next = temp->next;
	free(temp);

	return (1);
}
