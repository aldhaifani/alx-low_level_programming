#include "main.h"
#include <string.h>


/**
 * infinite_add - adds two numbers to a given buffer
 * @n1: pointer to the first integer string
 * @n2: pointer to the second integer string
 * @r: pointer to the buffer that will be used to store the result
 * @size_r: size of the buffer
 *
 * Return: result of the sum
 * otherwise 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, i1, i2, n;
	int bg, remainder = 0;

	len1 = strlen(n1);
	len2 = strlen(n2);
	if (len1 >= len2)
		bg = len1;
	else
		bg = len2;
	if (size_r <= bg + 1)
		return (0);
	len1--, len2--, size_r--;
	i1 = n1[len1] - 48, i2 = n2[len2] - 48;
	while (bg >= 0)
	{
		n = i1 + i2 + remainder;
		if (n >= 10)
			remainder = n / 10;
		else
			remainder = 0;
		n %= 10;
		if (len1 > 0)
			len1--, i1 = n1[len1] - 48;
		else
			i1 = 0;
		if (len2 > 0)
			len2--, i2 = n2[len2] - 48;
		else
			i2 = 0;
		r[bg] = n + 48;
		bg--, size_r--;
	}
	if (r[0] == '0')
		return (r + 1);
	return (r);
}
