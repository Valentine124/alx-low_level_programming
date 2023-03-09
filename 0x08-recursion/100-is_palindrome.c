#include "main.h"

/**
 * checker - check if palindrome
 * @str: the string
 * @len: lenght of string
 * @i: index
 * Return: 1 or 0
 */
int checker(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
		return (checker(str, len - 1, i + 1));
	if (str[i] != str[len])
		return (0);
	return (1);
}

/**
 * len - lenght of string
 * @s: the string
 * Return: lenght of string
 */
int len(char *s)
{
	if (*s != '\0')
	{
		return (1 + len(s + 1));
	}

	return (0);
}

/**
 * is_palindrome - check if is palindrome
 * @s: The string
 * Return: 1 or 2
 */
int is_palindrome(char *s)
{
	int i = 0;
	int lenght = len(s) - 1;

	return (checker(s,lenght, i));
}
