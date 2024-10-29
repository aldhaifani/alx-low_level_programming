#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring.
 * @haystack: main string
 * @needle: substring
 *
 * Return: pointer to the beginning of the located substring
 * NULL otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, subLen, test;

	if (*needle == '\0')
		return (haystack);

	subLen = 0;
	while (needle[subLen] != '\0')
		subLen++;

	test = 0;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 1; j < subLen; j++)
			{
				if (haystack[i + j] == needle[j])
					test = 1;
				else
				{
					test = 0;
					break;
				}
			}
		}
		if (test == 1)
			return (&haystack[i]);
	}
	return (NULL);
}
