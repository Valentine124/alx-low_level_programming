#include "main.h"

/**
 * helper = help find sqrt
 * @a: first number
 * @b: second numbe
 * Return: the sqr mumber
 */
int helper(int a, int b)
{
	if (b * b > a)
		return (-1);
	else if (b * b == a)
		return (b);
	else
		return (helper(a, b + 1));
	return (1);
}

/**
 * _sqrt_recursion - square root of numbers
 * @n: the number
 * Return: square root of the nmber
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (helper(n, 1);
}
