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
		for (s = f + 1; s <= 9;)
		{
			putchar(48 + f);
			putchar(48 + s);
			if (f == 8 && s == 9)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			s++;
		}
	}
	putchar('\n');
	return (0);
}
