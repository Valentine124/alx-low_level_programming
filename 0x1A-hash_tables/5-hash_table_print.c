#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: the table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp, **arr;
	unsigned long int idx, s = 0, n = 0, i = 0;

	if (ht == NULL)
		return;

	arr = ht->array;

	while (i < ht->size)
	{
		if (arr[i])
			s++;
		i++;
	}

	printf("{");

	for (idx = 0; idx < ht->size; idx++)
	{
		temp = arr[idx];

		while (temp)
		{
			if (n == s - 1 && !(temp->next))
				printf("'%s': '%s'", temp->key, temp->value);
			else
				printf("'%s': '%s', ", temp->key, temp->value);

			temp = temp->next;
		}

		if (arr[idx])
			n++;
	}

	printf("}\n");
}
