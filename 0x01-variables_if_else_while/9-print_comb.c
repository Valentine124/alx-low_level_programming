#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 Success
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(48 + n);
		if (n != 9)
		{
			/* add comma using ASCII code */
			putchar(44);
			/* add space using ASCII code */
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
