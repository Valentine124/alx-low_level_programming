#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number in base ten
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 1)
	{
		_putchar('0');
	}
	else
	{
		if (n >> 1)
			_putchar(n >> 1);

		if ((n & 1) == 0)
			_putchar('0');
		else
			_putchar('1');
	}

}
