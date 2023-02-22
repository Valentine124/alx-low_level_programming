#include "main.h"

/**
 * _islower - check if  a char is lower case
 * @c: Int to represent ASCII
 * Return: 1 if true 0 if false
 */
int _islower(int c)
{
	int n;

	for (n = 97; c <= 122; n++)
	{
		if (c == n)
		{
			return (1);
		}
	}

	return (0);
}
