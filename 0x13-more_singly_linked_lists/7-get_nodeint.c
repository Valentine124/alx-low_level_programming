#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get a node at an index
 * @head: the first node
 * @index: the index to search for
 * Return: the node at the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	temp = head;

	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}

	if (index > count)
		return (NULL);

	return (temp);
}
