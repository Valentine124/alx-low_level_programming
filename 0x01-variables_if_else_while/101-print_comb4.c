#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
*/
int main(void)
{
	int f, s, t;

	for (f = 0; f <= 7; f++)
	{

		for (s = f + 1; s <= 8; s++)
		{

			for (t = s + 1; t <= 9; t++)
			{
				putchar(48 + f);
				putchar(48 + s);
				putchar(48 + t);

				if (f == 7 && s == 8 && t == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
