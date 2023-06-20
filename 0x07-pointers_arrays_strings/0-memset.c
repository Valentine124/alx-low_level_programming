#include "main.h"

/**
 * _memset - copy constant to nth location of s
 * @s: the buff
 * @b: the constant
 * @n: the nuber of constant to add
 * Return: buff 's'
 */
char _memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
