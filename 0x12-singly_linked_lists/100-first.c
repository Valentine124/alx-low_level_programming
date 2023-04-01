#include <stdio.h>


void print_before(void)__attribute__((constructor));

/**
 * print_before - print this before main is called
 */
void print_before(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
