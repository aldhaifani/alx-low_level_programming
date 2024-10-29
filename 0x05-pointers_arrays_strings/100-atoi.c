#include "main.h"
#include <string.h>

/**
 * _atoi - convert a string to an integer.
 * @s: address to the string to be used
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int n = 0;
	int sign = 1;
	int int_found = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			sign *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			int_found = 1;
			n = (n * 10) + (s[c] - '0');
			c++;
		}

		if (int_found == 1)
		{
			break;
		}

		c++;
	}

	n *= sign;
	return (n);
}
