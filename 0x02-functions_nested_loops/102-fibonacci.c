#include "main.h"

/**
 * main - program to print first 50 fibinacci number
 *
 * Return: Success 0
 */
int main(void)
{
	long int first = 1, second = 2, i = 0, next;

	printf("%ld, %ld, ", first, second);

	while (i < 48)
	{
		next = first + second;
		first = second;
		second = next;

		if (i == 47)
			printf("%ld", next);
		else
			printf("%ld, ", next);

		i++;
	}
	printf("\n");

	return (0);
}
