#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string of 1's and 0's
 *
 * Return: the converted number or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, dec = 0, len = 0;

	while (b[i++])
		len += 1;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] == '1')
		{
			dec += 1 * (1 << (len - (i + 1)));
		}
		else if (b[i] == '0')
		{
			dec += 0 * (1 << (len - (i + 1)));
		}
		else
		{
			return (0);
		}
	}

	return (dec);
}
