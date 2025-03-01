#include <stdio.h>

/**
 * main - Entry point of the program
 *		a program that computes and prints the sum of all
 *		the multiples of 3 or 5 below 1024 (excluded),
 *		followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i, result;

	result = 0;

	/* add multiples of 3 */
	for (i = 1; i * 3 < 1024; i++)
		result += i * 3;

	/* add multiples of 5 */
	for (i = 1; i * 5 < 1024; i++)
	{
		if (i * 5 % 3 == 0)
			continue;
		result += i * 5;
	}

	printf("%lu\n", result);

	return (0);
}
