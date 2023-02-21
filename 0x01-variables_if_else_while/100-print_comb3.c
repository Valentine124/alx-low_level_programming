#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
*/
int main(void)
{
	int f;
	int s;

	for (f = 0; f <= 8; f++)
	{
		for (s = 1; s <= 9; s++)
		{
			if (f == 8 && s == 9)
			{
				continue;
			}
			putchar(48 + f);
			putchar(48 + s);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
