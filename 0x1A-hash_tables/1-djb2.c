#include "hash_tables.h"

/**
 * hash_djb2 - djb2 hash function implementation
 * @str: The string to hash
 *
 * Return: The hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int ch, i;

	for (i = 0; str[i]; i++)
	{
		ch = str[i];
		hash = ((hash << 5) + hash) + ch;
	}

	return (hash);
}
