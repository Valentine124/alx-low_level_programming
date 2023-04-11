#include <stdio.h>
#include "main.h"

int power(int base, int index);
/**
 * binary_to_unit - convert binary to an int
 * @b: the binary in string format
 * Return: the converted number or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unit = 0;
	int i, len = 0, c = 0;

	if (b == NULL)
		return (0);

	while (b[c++])
		len++;

	for (i = 0; i < len; i++)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			int l = len - (i + 1);
			int p = power(2, l);
			int n = 0;

			if (b[i] == '1')
				n = 1;
			else
				n = 0;

			unit += n * p;
		}
		else
		{
			return (0);
		}
	}

	return (unit);
}

/**
 * power - find the power of a num
 * @base: the base number
 * @index: the index
 * Return: the power of the base
 */
int power(int base, int index)
{
	if (index == 0)
		return (1);
	else
		return (base * power(base, index - 1));
}
