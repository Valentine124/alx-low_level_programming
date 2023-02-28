#include <stdio.h>
#include <string.h>

/**
 * puts_half - print half of a string
 * @str: string to print
 */
void puts_half(char *str)
{
	int i, n, len;

	len = strlen(str);
	n = (len - 1) / 2;

	for (i = n; i <= len - 1; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
