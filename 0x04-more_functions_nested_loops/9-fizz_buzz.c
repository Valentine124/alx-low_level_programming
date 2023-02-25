#include <stdio.h>

/**
 * main - print fizz buzz
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0)
			printf("Fizz");

		if ((n % 5) == 0)
			printf("Buzz");

		if ((n % 3) == 0 && (n % 5) == 0)
			printf("FizzBuzz");

		printf("%d", n);

		if (n == 100)
			continue;
		printf(" ");
	}

	printf("\n");
	return (0);
}
