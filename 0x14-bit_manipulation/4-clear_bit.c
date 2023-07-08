#include "main.h"

/**
 * clear_bit - set a bit to 0 at an index
 * @n: pointer to the bits
 * @index: index to set
 *
 * Return: 1 if worked or -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned in index)
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
