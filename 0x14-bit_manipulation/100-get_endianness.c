#include "main.h"

/**
 * get_endianness - find the endianess of a machine
 *
 * Return: 0 (Big endian) or 1 (Little endian)
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c == 0)
		return (0);
	else
		return (1);
}
