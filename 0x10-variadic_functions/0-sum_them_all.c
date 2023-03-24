#include <stdarg.h>

/**
 * sum_them_all - add all arguments
 * @n: number of argument
 * Return: 0 if n == 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i;
	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; (unsigned int) i < n; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);

	return (sum);
}
