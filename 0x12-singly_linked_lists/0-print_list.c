#include <stddef.h>
#include "lists.h"

void print_node(const list_t *n);

/**
 * print_list - print elements of a linked list
 * @h: the first node
 * Return: the numbers of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t n = 0;

	temp = h;

	if (temp == NULL)
		return (0);

	do {
		print_node(temp);

		temp = temp->next;
		n++;
	} while (temp != NULL);

	return (n);
}

/**
 * print_str - print string
 * @s: the string to be printed
 */
void print_str(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}

/**
 * print_node - print the str and len of a node
 * @n: the node
 */
void print_node(const list_t *n)
{
	if (n->str == NULL)
	{
		_putchar('[');
		_putchar('0' + n->len);
		_putchar(']');
		_putchar(' ');
		print_str("(nil)");
		_putchar('\n');
	}
	else
	{
		_putchar('[');
		_putchar('0' + n->len);
		_putchar(']');
		_putchar(' ');
		print_str(n->str);
		_putchar('\n');
	}
}