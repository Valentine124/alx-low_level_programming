#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print all numbers
 *
 * @separator: the number seperator
 *
 * @n: numbers of argument
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", va_arg(ptr, const unsigned int));
		else
			printf("%d%s", va_arg(ptr, const unsigned int), separator);
	}

	printf("\n");

	va_end(ptr);
}
