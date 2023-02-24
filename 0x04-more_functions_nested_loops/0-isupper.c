#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks if a letter is uppercase
 * @c: the letter passed as parameter
 * Return: 1 if true or 0 if false
 */
int _isupper(int c)
{
	if (isupper(c) != 0)
		return (1);
	return (0);
}
