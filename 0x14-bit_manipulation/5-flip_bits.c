#include "main.h"

/**
 * flip_bits - check number of bit to flip to get from one
 * value to another
 * @n: first number
 * @m: second number
 *
 * Return: the number of bit to flip
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
