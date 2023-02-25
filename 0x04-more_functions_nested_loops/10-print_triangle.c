/**
 * print_triangle - draw a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int l;
	int b;
	int s;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			if (l != (size -1))
			{
				for (s = 1; s < (size - l); s++)
					_putchar(' ');
			}

			for (b = 0; b < size; b++)
				_putchar('#');

			if (l == (size -n))
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
