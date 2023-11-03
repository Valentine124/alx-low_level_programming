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
	int ch;

	while (ch = *str)
	{
		hash = ((hash << 5) + hash) + ch;
	}

	return (hash);
}
