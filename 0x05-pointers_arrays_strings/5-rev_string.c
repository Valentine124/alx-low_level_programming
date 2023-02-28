#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string
 */
void rev_string(char *s)
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
