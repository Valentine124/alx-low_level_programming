#include "main.h"

/**
 * _puts_recursion - write a sting recursively
 * @s: the string added
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
