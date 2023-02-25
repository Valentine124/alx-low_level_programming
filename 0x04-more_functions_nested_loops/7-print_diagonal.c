#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: lenght of diagonal
 */
void print_diagonal(int n)
{
	int l;
	int s;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (s = 0; s < l; s++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
