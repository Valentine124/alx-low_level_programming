#include "main.h"

/**
 * print_sign - print the sign of the input
 * @n: a number of type int
 * Return: 1 if + and 0 if 0 and -1 if -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
