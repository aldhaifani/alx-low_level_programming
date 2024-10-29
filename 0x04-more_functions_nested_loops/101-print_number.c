#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer to be printed
 *
 * Return: void, nth
 */
void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	m = n;
	m /= 10;

	if (m != 0)
		print_number(m);

	_putchar((unsigned int)n % 10 + '0');
}
