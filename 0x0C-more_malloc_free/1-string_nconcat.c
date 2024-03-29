#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - join two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * @n: byte of `s2` to use
 *
 * Return: pointer to new memory or `NULL`
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int lens1 = 0, lens2 = 0;
	int i, j, c1 = 0, c2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[c1++])
		lens1++;

	while (s2[c2++])
		lens2++;

	if (n < (unsigned int) lens2)
		lens2 = n;

	s3 = malloc(sizeof(char) * (lens1 + lens2) + 1);

	if (s3 == NULL)
		return NULL;

	for (i = 0; i < lens1; i++)
		s3[i] = s1[i];

	for (j = 0; j < lens2; j++)
		s3[lens1 + j] = s2[j];

	s3[lens1 + lens2] = '\0';

	return (s3);


}
