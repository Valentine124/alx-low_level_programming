#include "main.h"

/**
 * main - Entry point
 *
 * Return: success 0
 */
int main(void)
{
	char c[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	for (int i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');

	return (0);
}
