#include "hash_tables.h"

/**
 * hash_table_create - Creates an empty hash table
 * @size: The size of the table
 *
 * Return: The created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t *arr;
	hash_table_t *table;
	unsigned long int i;

	arr = malloc(sizeof(*arr) * size);
	if (arr == NULL)
		return (NULL);

	/* Assign NULL to all spaces in arr */
	for (i = 0; i < size; i++)
	{
		arr[i].key = NULL;
		arr[i].value = NULL;
		arr[i].next = NULL;
	}

	table->size = size;
	table->arr = &arr;

	return (table);
}
