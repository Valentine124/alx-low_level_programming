#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string
 */
void rev_string(char *s)
{
	int len;
	int i;

	len = strlen(s);

	for (i = 0; i < (len / 2); i++)
	{
		char temp = s[i];

		s[i] = s[len - (i + 1)];
		s[len - (i + 1)] = temp;
	}
}
