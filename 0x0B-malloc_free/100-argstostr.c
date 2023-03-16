#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - join all argument
 *
 * @ac: argument count
 *
 * @av: the array of char
 *
 * Return: String or NULL
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, len, pos = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;

	str = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		strcpy(str + pos, av[i]);
		pos += strlen(av[i]);
		*(str + pos) = '\n';
		pos++;
	}

	return (str);
}
