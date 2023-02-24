#include "main.h"

/**
 * more_numbers - prints 10 times numbers 0 to 14
 */
void more_numbers(void)
{
	int c;
	int n;

	c = 0;

	while (c < 10)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}

		_putchar('\n');
		c++;
	}
}
