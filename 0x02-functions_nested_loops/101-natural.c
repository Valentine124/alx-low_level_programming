#include "main.h"

/**
 * main - Calculate sum of multiples of 3 and 5
 *
 * Return: 0 success
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return (0);

}
