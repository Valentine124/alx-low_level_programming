#include <stdio.h>

/**
 * _puts - prints a string followed by a new line
 * @str: the string to be printed
 */
void _puts(char *str)
{
	int l;
	char n;

	l = 0;
	
	while (str[l] != '\0')
	{
		n = str[l];

		puts(n);
		l++;
	}
	puts('\n');
}
