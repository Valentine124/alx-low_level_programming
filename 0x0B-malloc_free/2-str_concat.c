#include <stdlib.h>
#include "main.h"

/**
 * str_concat - join two strings
 *
 * @s1: the first string
 *
 * @s2: the second string
 *
 * Return: a pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int lens1 = 0, lens2 = 0, c1 = 0, c2 = 0;
	int ci, cj, i = 0;

	if (s1 == NULL)
		s1 = "";
	if(s2 == NULL)
		s2 = "";

	while (s1[c1++])
		lens1++;

	while(s2[c2++])
		lens2++;

	s3 = malloc(sizeof(char) * ((lens1 + lens2) + 3));

	for (ci = 0; ci < lens1; ci++)
	{
		i += ci;
		s3[i] = s1[i];
	}

	for (cj = 0; cj < lens2; cj++)
	{
		i += cj + 1;
		s3[i] = s2[cj];
	}

	s3[(lens1 + lens2) - 1] = '\0';

	return (s3);
}
