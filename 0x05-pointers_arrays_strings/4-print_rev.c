#include <string.h>
#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int len;
	int i;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
