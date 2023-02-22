#include "main.h"

/**
 * print_last_digit - output last digit of a number
 * @n: the number in int
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = -1 * last;
	}

	_putchar(last + '0');

	return (last);
}
