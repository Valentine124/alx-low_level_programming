#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the table
 *
 * Return: A pointer to newly created table
 * or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **new_arr;
	unsigned long int i;

	if (size <= 0)
		return (NULL);

	new_table = malloc(sizeof(*new_table));
	if (new_table == NULL)
		return (NULL);

	new_arr = malloc(sizeof(new_arr) * size);
	if (new_arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		new_arr[i] = NULL;

	new_table->size = size;
	new_table->array = new_arr;

	return (new_table);
}
