#include <stdio.h>

/**
 * fizz_buzz - print fizz buzz
 */
void fizz_buzz(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0)
			printf("Fizz ");

		if ((n % 5) == 0)
			printf("Buzz ");

		if ((n % 3) == 0 && (n % 5) == 0)
			printf("FizzBuzz ");

		printf("%d ", n);
	}

	printf("\n");
}
