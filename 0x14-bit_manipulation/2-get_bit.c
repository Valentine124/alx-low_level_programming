#include "main.h"

/**
 * get_bit - get a bit at an index
 * @n: the number
 * @index: the index to get
 *
 * Return: the bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i < 64; i++)
	{
		if (index == i)
		{
			unsigned int mask = n >> index;

			return (mask & 1);
		}
	}

	return (-1);
}
