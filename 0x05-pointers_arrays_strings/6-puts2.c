#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string
 */
void puts2(char *str)
{
	int i, len;
	char ch[strlen(str)];

	len = strlen(str);

	for (i = 0; i <= len - 1; i += 2)
	{
		ch[i] = str[i];
	}

	puts(ch);
}
