#include "main.h"

/**
 * print_alphabet_x10 - print alphabrts 10x
 */
void print_alphabet_x10(void)
{
	int n;
	int c;
	c = 0;

	while (c < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		c++;
		_putchar('\n');
	}
}
