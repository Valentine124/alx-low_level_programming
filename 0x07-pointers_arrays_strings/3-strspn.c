#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: the main string
 * @accept: the substring
 * Return: the length of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, len = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}

		if (accpt[j] == '\0')
			return (len);
	}

	return (len);
}
