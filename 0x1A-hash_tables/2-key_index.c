#include "hash_tables.h"

/**
 * key_index - Get the index of a hash value
 * @key: The hash value
 * @size: The size of the array
 *
 * Return: The index to store the data in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int k;

	k = hash_djb2(key);

	return (k % size);
}
