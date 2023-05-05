#include "main.h"

/**
 * set_bit - set a bit to 1 at an index
 * @n: the number
 * @index: the index to set
 *
 * Return: 1 if success or -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (n == NULL)
		return (-1);

	for (i = 0; i < 64; i++)
	{
		if (index == i)
		{
			unsigned int mask = 1 << index;

			*n |= mask;

			return (1);
		}
	}

	return (-1);
}
