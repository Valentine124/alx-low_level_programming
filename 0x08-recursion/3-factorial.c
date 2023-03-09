#include "main.h"

/**
 * factoria - print factoria of a number
 * @n: the number
 * Return: factoria of n
 */
int factoria(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factoria(n - 1));
}
