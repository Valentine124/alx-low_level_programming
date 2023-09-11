#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: the table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp, **arr;
	unsigned long int idx;

	if (ht == NULL)
		return;

	arr = ht->array;

	printf("{");

	for (idx = 0; idx < ht->size; idx++)
	{
		temp = arr[idx];

		while (temp)
		{
			if (idx == (ht->size - 1))
				printf("'%s': '%s'", temp->key, temp->value);
			else
				printf("'%s': '%s', ", temp->key, temp->value);
		}
	}

	print("}\n");
}
