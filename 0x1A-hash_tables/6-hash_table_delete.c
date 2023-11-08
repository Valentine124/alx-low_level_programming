#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (!(ht->array[i]))
			continue;

		delete_list(ht->array[i]);
	}

	free(ht->array);
	ht->array = NULL;
	free(ht);
	ht = NULL;
}

/**
 * delete_list - delete all elemrnts of a linked list
 * @head: the list top
 */
void delete_list(hash_node_t *head)
{
	if (head == NULL)
		return;

	if (head->next)
		delete_list(head->next);

	free(head->key);
	head->key = NULL;
	free(head->value);
	head->value = NULL;
	free(head);
	head = NULL;
}
