#include "main.h"

/**
 * main - program to print sum of fib even values
 *
 * Return: Success 0
 */
int main(void)
{
	long int first = 1, second = 2, next = 0;
	long int sum = second;

	while (next <= 4000000)
	{
		next = first + second;
		first = second;
		second = next;

		if (next % 2 == 0)
			sum += next;
	}

	printf("%ld\n", sum);

	return (0);
}
