#include <stdio.h>
#include <math.h>

/**
 * main - print largest prime factor
 * Return: Success 0
 */

int main(void)
{
	long int n = 612852475143;
	long int i, largest;

	while (n % 2 == 0)
	{
		largest = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n /= i;
		}
	}

	if (n > 2)
	{
		largest = n;
	}

	printf("%ld\n", largest);

	return (0);
}
