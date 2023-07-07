#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string of 1's and 0's
 *
 * Return: the converted number or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, c = 0, dec = 0, len = 0;

	while (b[c++])
		len += 1;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		int n;

		if (b[i] > '1' || b[i] <'0')
			return (0);

		if (b[i] == '1')
		{
			n = 1;
		}

		if (b[i] == '0')
		{
			n = 0;
		}

		dec += n * (1 << (len - (i + 1)));
	}

	return (dec);
}
