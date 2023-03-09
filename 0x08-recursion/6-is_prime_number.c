#include "main.h"

/**
 * is_prime_number - check if number is prime
 * @n: the number
 * Return: 1 if prime or 0 if not
 */
int is_prime_number(int n)
{
	int i;

	for (i = 2; i < n; i++)
	{
		if ((n / i) == 0)
			return (0);
	}

	return (1);
}
