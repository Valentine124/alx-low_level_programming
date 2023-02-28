#include <stdio.h>

/**
 * _puts - prints a string followed by a new line
 * @str: the string to be printed
 */
void _puts(char *str)
{
	int l;

	l = 0;
	
	while (str[l] != '\0')
	{
		puts(str[l]);
		l++;
	}
	puts('\n');
}
