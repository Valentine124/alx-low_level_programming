#include "main.h"

/**
 * print_number - prints number to stdout
 * @n: the number to print
 */

void print_number(int n)
{
	if (n / 10 != 0)
		print_number(n / 10);

	if (n >= 0)
		_putchar((n % 10) + '0');
	else
	{
		if (n / 10 == 0)
			_putchar('-');

		_putchar(((n % 10) * -1) + '0');
	}
}
