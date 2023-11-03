#include "hash_tables.h"

/**
 * hash_djb2 - A hash function for the hash table
 * @str: The string to hash
 *
 * Return: The hash code
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int i;

	for (i = 0; str[i]; i++)
	{
		hash = ((hash << 5) + hash) + str[i];
	}

	return (hash);
}
