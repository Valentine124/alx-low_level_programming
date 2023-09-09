#include "hash_tables.h"

/**
 * hash_table_set - add an element to a hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value associated with key
 *
 * Return: 1 if succesfull or 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t **arr, *new;

	if (ht == NULL)
		return (0);

	arr = ht->array;

	if (key == NULL || *key == '\0')
		return (0);
	if (value == NULL || *value == '\0')
		return (0);

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	idx = key_index((const unsigned char *)key, ht->size);

	if (arr[idx] == NULL)
	{
		arr[idx] = new;
	}
	else
	{
		(arr[idx])->next = new;
	}

	return (1);
}
