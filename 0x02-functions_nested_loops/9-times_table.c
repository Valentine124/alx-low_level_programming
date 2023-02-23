#include "main.h"

/**
 * times_table - print table 0 to 9
 */
void times_table(void)
{
	for (int f = 0; f <= 9; f++)
	{
		_putchar('0');

		for (int s = 1; s <= 9; s++)
		{
			int prod;

			prod = f * s;

			_putchar(',');
			_putchar(' ');
			_putchar(prod + '0');
		}
		
		_putchar('\n');
	}
}
