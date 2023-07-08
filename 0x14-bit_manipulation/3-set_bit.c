#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: pointer to the bits
 * @index: the index starting at 0
 *
 * Return: 1 if worked or -1 if failed
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
