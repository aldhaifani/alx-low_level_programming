#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *		a program that finds and prints the first
 * 98 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 *		starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	__uint128_t a, b, x;
	int i;

	a = 1;
	b = 2;

	print_uint128(a);
	printf(", ");
	print_uint128(b);
	printf(", ");

	for (i = 0; i < 96; i++)
	{
		x = a + b;
		if (i < 95)
		{
			print_uint128(x);
			printf(", ");
		}
		else
		{
			print_uint128(x);
			printf("\n");
		}
		a = b;
		b = x;
	}

	return (0);
}

/**
 * print_uint128 - uses printf to print __uint128_t type nums
 * @num: the number to print
 *
 * Return: void (nothing)
 */
void print_uint128(__uint128_t num)
{
	char buffer[40];
	int index = 39;

	if (num == 0)
	{
		printf("0");
		return;
	}

	buffer[index] = '\0';

	while (num > 0)
	{
		buffer[--index] = '0' + (num % 10);
		num /= 10;
	}

	printf("%s", &buffer[index]);
}
