#include "main.h"

/**
 * print_binary - convert an integer to number
 * @n: the integer
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n >> 1)
			print_binary(n >> 1);

		if ((n & 1) == 0)
			_putchar('0');
		else
			_putchar('1');
	}
}
