#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: the number to be computed
 *
 * Return: the value of the last digit of n
 */
int print_last_digit(int n)
{
	int abs_n = n;
	int last_n;

	if (n < 0)
		abs_n *= -1;

	last_n = abs_n % 10;

	_putchar(last_n + '0');
	return (last_n);
}
