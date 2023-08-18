#include "lists.h"

/**
 * get_dnodeint_at_index - get a node at a given index
 * @head: The list
 * @index: the index to get
 *
 * Return: the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		if (count == index)
			return (temp);

		count += 1;
		temp = temp->next;
	}

	return (NULL);
}
