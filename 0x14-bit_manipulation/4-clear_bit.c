#include "main.h"

/**
 * clear_bit - unset bit at an index
 * @n: the number
 * @index: the index to unset
 *
 * Return: 1 if success or -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (n == NULL)
		return (-1);

	for (i = 0; i < 64; i++)
	{
		if (index == i)
		{
			unsigned int mask = 1 << index;

			*n &= ~mask;

			return (1);
		}
	}

	return (-1);
}
