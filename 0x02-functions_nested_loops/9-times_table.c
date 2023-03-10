#include "main.h"

/**
 * times_table - print table 0 to 9
 */
void times_table(void)
{
	int f;
	int s;

	for (f = 0; f <= 9; f++)
	{
		_putchar('0');

		for (s = 1; s <= 9; s++)
		{
			int prod;

			prod = f * s;

			_putchar(',');
			_putchar(' ');

			if (prod <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((prod / 10) + '0');
			}

			_putchar((prod % 10) + '0');
		}

		_putchar('\n');
	}
}
