#include "main.h"

/**
 * print_alphabet_x10 - print alphabrts 10x
 */
void print_alphabet_x10(void)
{
	int n;
	char c;

	for (n = 0; n <= 10; n++)
	{
		print_alphabet();
		_putchar('\n');
	}
	_putchar('\n');
}
