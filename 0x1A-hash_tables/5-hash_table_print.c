#include "hash_tables.h"

/**
 * hash_table_print - print all elements of a hash_table
 * @ht: The hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i, flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (!(ht->array[i]))
			continue;

		temp = ht->array[i];

		if (flag)
			printf(", ");

		while (temp)
		{
			printf("'%s': '%s'", temp->key, temp->value);

			if (temp->next)
				printf(", ");

			flag = 1;
			temp = temp->next;
		}
	}

	printf("}\n");
}
