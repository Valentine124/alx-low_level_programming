#include "main.h"

/**
 * _islower - check if  a char is lower case
 * @c: Int to represent ASCII
 * Return: 1 if true 0 if false
 */
int _islower(int c)
{
	if (islower(c) != 0)
	{
		return (1);
	}
	return (0);
}
