#include <stdio.h>

/**
 * main - program to first 98 fibonacci number
 *
 * Return: Success 0
 */
int main(void)
{
	unsigned long first = 1, second = 2, next, i = 0;

	printf("%lu, %lu, ", first, second);

	while (i < 96)
	{
		next = first + second;
		first = second;
		second = next;

		if (i == 95)
			printf("%lu", next);
		else
			printf("%lu, ", next);

		i++;
	}
	printf("\n");

	return (0);
}
