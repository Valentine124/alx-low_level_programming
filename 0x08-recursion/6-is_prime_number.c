#include "main.h"

/**
 * is_prime_number - check if number is prime
 * @n: the number
 * Return: 1 if prime or 0 if not
 */
int is_prime_number(int n)
{
	unsigned int i = 2;

	if (n == 0 || n <= 1)
		return (0);

	if (n == i)
		return (1);

	if ((n % i) == 0)
		return (0);

	i++;

	return (is_prime_number(i));
}
