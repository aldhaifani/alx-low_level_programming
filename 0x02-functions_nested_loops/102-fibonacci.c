#include <stdio.h>

/**
 * main - Entry point of the program
 *		a program that prints the first 50 Fibonacci numbers,
 *		starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a, b, x, i;

	a = 1;
	b = 2;

	printf("%lu, %lu, ", a, b);

	for (i = 0; i < 48; i++)
	{
		x = a + b;
		if (i < 47)
			printf("%lu, ", x);
		else
			printf("%lu\n", x);
		a = b;
		b = x;
	}

	return (0);
}
