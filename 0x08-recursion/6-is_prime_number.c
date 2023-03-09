#include "main.h"

/**
 * prime - check if prime
 * @a: original number
 * @b: iterator number
 * Return: 1 or 0
 */
int prime(int a, int b)
{
	if (a <= 1 || a % b == 0)
		return (0);
	else if (a == b)
		return (1);
	else if (a > b)
		prime(a, b + 1);

	return (1);
}

/**
 * is_prime_number - check if number is prime
 * @n: the number
 * Return: 1 if prime or 0 if not
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
