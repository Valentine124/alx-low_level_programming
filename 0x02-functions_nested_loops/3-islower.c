#include "main.h"

/**
 * _islower - check if  a char is lower case
 * Return: 1 if true 0 if false
 */
int _islower(int c)
{
	char cs;

	for (cs = 'a'; c <= 'z'; cs++)
	{
		if (c == cs)
		{
			return (1);
		}
	}
	
	return (0);
}
