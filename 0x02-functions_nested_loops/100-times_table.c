#include "main.h"

/**
 * print_times_table - print times table from 0 to `n`
 * @n: max number in times table where n is 0 to 15
 *
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int mul = i * j;
			int next = i * (j + 1);

			format(mul, next, j, n);
		}
		_putchar('\n');
	}
}

/**
 * format - format times table
 * @mul: multiplied value
 * @next: next multiplied value to determine number of space
 * @j: count to determine last value
 * @n: the highest number in times table
 */
void format(int mul, int next, int j, int n)
{
	if (mul < 9)
	{
		_putchar(mul + '0');
	}
	else if (mul >= 10 && mul <= 99)
	{
		_putchar((mul / 10) + '0');
		_putchar((mul % 10) + '0');
	}
	else
	{
		_putchar(((mul / 10) / 10) + '0');
		_putchar(((mul / 10) % 10) + '0');
		_putchar((mul % 10) + '0');
	}

	if (j != n)
	{
		_putchar(',');
		if (next <= 9)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
		}
		else if (next >= 10 && next <= 99)
		{
			_putchar(' ');
			_putchar(' ');
		}
		else
		{
			_putchar(' ');
		}
	}
}
