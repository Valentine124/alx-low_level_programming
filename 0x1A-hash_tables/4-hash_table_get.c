#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the table
 * @key: The key to retrieve
 *
 * Return: vale associated with element or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head, *temp;

	index = key_index((const unsigned char *) key, ht->size);

	head = ht->array[index];

	if (head == NULL)
		return (NULL);

	temp = head;

	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);

		temp = temp->next;
	}

	return (NULL);
}
