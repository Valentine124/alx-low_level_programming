#include "main.h"

/**
 * factorial - print factoria of a number
 * @n: the number
 * Return: factoria of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
