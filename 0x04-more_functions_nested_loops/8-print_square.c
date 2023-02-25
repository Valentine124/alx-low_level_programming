#include "main.h"

/**
 * print_square - draw a square
 * @size: size of square
 */
void print_square(int size)
{
	int l;
	int s;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (s = 0; s < size; s++)
				_putchar('#');
			
			if (l == size - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
