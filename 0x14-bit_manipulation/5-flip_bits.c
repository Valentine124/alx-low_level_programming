#include "main.h"

/**
 * flip_bits - get the number of bits to be flipped
 * @n: the first number
 * @m: the second number
 *
 * Return: Number of bits that would be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	unsigned long int dff = n ^ m;

	while (dff > 0)
	{
		count++;

		dff &= dff - 1;
	}

	return (count);
}
