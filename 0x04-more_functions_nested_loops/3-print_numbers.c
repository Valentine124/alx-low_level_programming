#include "main.h"

/**
 * print_number - prints numbers 0 to 9
 */
void print_number(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}

	_putchar('\n');
}
