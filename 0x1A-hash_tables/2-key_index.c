#include "hash_tables.h"

/**
 * key_index - gets the index of a key
 * @key: the key as string
 * @size: The size of the table
 *
 * Return: The index at which the key/value pair will be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code, index;

	hash_code = hash_djb2(key);

	index = hash_code % size;

	return (index);
}
