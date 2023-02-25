#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - print fizz buzz
 */
void fizz_buzz(void)
{
	int n;

	char fizz[] = "Fizz";
	char buzz[] = "Buzz";

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0)
			printf("%s ", fizz);

		if ((n % 5) == 0)
			printf("%s ", buzz);

		if ((n % 3) == 0 && (n % 5) == 0)
			printf("%s%s ", fizz, buzz);

		printf("%d ", n);
	}

	_putchar('\n');
}
