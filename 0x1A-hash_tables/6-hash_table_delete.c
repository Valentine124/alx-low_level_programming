#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table
 * @ht: The hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t **arr;

	if (ht == NULL)
		return;

	arr = ht->array;

	for (idx = 0; idx < ht->size; idx++)
	{
		if (arr[idx])
			free_items(arr[idx]);
	}

	free(ht->array);
	ht->array = NULL;
	free(ht);
	ht = NULL;
}

/**
 * free_items - free all the items of a hash table
 * @item: The items
 */
void free_items(hash_node_t *item)
{
	if (item == NULL)
		return;
	if (item->next)
		free_items(item->next);

	free(item->key);
	free(item->value);
	free(item);
	item = NULL;
}
