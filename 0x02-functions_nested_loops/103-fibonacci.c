#include <stdio.h>

/**
 * main - Entry point of the program
 * By considering the terms in the Fibonacci sequence whose
 * values do not exceed 4,000,000, this is a program that finds
 * and prints the sum of the even-valued terms,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a, b, x, sum;

	sum = 2;
	a = 1;
	b = 2;
	x = a + b;

	while (x < 4000000)
	{
		if (x % 2 == 0)
			sum += x;
		a = b;
		b = x;
		x = a + b;
	}

	printf("%lu\n", sum);

	return (0);
}
