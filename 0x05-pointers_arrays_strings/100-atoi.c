#include "main.h"

/**
 * _atoi - convert ascii to int
 * @s: thestring
 * Return: integer representation
 */
int _atoi(char *s)
{
	int c, n, num = 0, sign = 1;

	if (s == NULL)
		return (num);

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == '-')
			sign *= -1;
		else if (s[c] == '+')
			sign *= +1;
		else
		{
			if (s[c] >= '0' && s[c] <= '9')
			{
				for (n = 0; n < 9; n++)
				{
					if ('0' + n == s[c])
					{
						num = (num * 10) + n;
						break;
					}
				}

				if (!(s[c + 1] >= '0' && s[c + 1] <= '9'))
					return (sign * num);
			}
		}
	}

	return (sign * num);
}
