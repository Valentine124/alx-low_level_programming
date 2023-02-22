#include <ctype.h>
#include "main.h"

/**
 * _isalpha - check if it's alphabet
 * @c: int to represent ASCII
 * Return: 1 if true and 0 if false
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
	{
		return (1);
	}

	return (0);
}
