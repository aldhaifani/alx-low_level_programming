#include <stdio.h>
#include "main.h"

/**
 * print_times_table - a function that prints the n times table
 *		starting with 0.
 * @n: The number to print to, (0 to 15)
 *
 * Return: void (nothing)
 */
void print_times_table(int n)
{
	int i, j;
	long int result;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;

			printf("%ld", result);

			if (j == n)
				printf("\n");
			else if (result < 10)
				printf(",   ");
			else if (result < 100)
				printf(",  ");
			else
				printf(", ");
		}
	}
}
