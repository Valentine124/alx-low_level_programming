#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu bytes(s)\n", (unsigned)sizeof(char));
	printf("Size of a int: %lu byte(s)\n", {unsigned)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu byte\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %lu btye \n", {unsigned long}sizeof(f));
	return (0);

}
