#include <ctype.h>
#include "main.h"

/**
 * isdigit - checks for digits
 * @c: the input to check on
 * Return: 1 if is digit or 0 if not
 */
int _isdigit(int c)
{
	if (isdigit(c) != 0)
		return (1);
	return (0);
}
