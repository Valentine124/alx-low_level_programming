#include "main.h"

int power(int num, int index);

/**
 * binary_to_uint - convert a binary to an integer
 * @b: the binary number in string
 * Return: The converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, ans = 0;
	unsigned int len = 0, c = 0;

	if (b == NULL)
		return (0);

	while (b[c++])
		len++;

	for (i = 0; i < len; i++)
	{
		int n, l = len;

		if (b[i] != '0' || b[i] != '1')
			return (0);
		if (b[i] == '0')
			n = 0;
		else
			n = 1;

		ans += n * power(2, l - (i + 1));
	}

	return (ans);
}

/**
 * power - get the power of a number
 * @num: the number
 * @index: the power
 * Return: the productof each index
 */
int power(int num, int index)
{
	if (index == 0)
		return (1);
	else
		return (num * power(num, index - 1));
}
