#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - add an element to the hash table
 * @ht: the hash table
 * @key: the key for hashing
 * @value: the value
 *
 * Return: 1 if success or 0 if failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;

	if (ht == NULL)
		return (0);

	if (value == NULL || *value == '\0')
		return (0);

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);

	new->key = strdup(key);
	new->value = strdup(value);

	if (!(ht->array[index]))
	{
		new->next = NULL;
		ht->array[index] = new;
	}
	else
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}

	return (1);
}
