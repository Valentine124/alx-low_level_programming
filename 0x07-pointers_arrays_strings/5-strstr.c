#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: the main string
 * @needle: the substring
 * Return: Pointer to the begining of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *sub = NULL;

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			sub = &haystack[i];
			for (j = 1; needle[j]; i++)
			{
				if (haystack[i + 1] != needle[j])
				{
					sub = NULL;
					break;
				}
			}

			if (needle[j] == '\0')
				return (sub);
		}
	}
	return (sub);
}
