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
		putchar(40 + n);
		/* add , using ASCII code */
		putchar(44);
		/* add space using ASCII code */
		putchar(32);
	}
	return (0);
}
