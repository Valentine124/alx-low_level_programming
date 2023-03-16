#include <stdlib.h>
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
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);

	str = malloc(sizeof(char) * (ac * 2));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i += 2)
	{
		str[i] = av[i];
		str[i + 1] = '\n';
	}

	return (str);
}
