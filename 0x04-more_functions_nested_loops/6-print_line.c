#include "main.h"

/**
 * print_line - print a straight line
 * @n: lenght of line
 */
void print_line(int n)
{
	if (n > 0)
	{
		int l;

		for (l = 0; l <= n; l++)
                {
	                _putchar('_');
	        }
	}

	_putchar('\n');
}
