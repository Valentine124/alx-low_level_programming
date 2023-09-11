#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value associated with a key
 * @ht: the hash table
 * @key: The key to retrieve
 *
 * Return: The value associated with the key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t **arr, *temp;
	unsigned long int idx;

	if (ht == NULL)
		return (NULL);

	arr = ht->array;
	idx = key_index((const unsigned char *)key, ht->size);

	temp = arr[idx];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);

		temp = temp->next;
	}

	return (NULL);
}
