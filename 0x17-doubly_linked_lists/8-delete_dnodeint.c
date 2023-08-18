#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: The list
 * @index: index to delete at
 *
 * Return: 1 on success and -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp;

	temp = *head;

	while (temp)
	{
		if (count == index)
		{
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;

			free(temp);

			return (1);
		}
	}

	return (-1);
}
