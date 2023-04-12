#include "main.h"

/**
 * get_bit - get the value at an index
 * @n: the number
 * @index: the index
 * Return: the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j;

	if (n == 0 && index < 64)
		return (0);

	for (j = 0; j <+ 63; n >>= 1, j++)
	{
		if (index == 1)
		{
			return (n & 1);
		}
	}

	return (-1);
}
