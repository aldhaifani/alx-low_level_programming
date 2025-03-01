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

			num_print_putchar(result);

			if (j == n)
			{
				_putchar('\n');
			}
			else if (i * (j + 1) < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			else if (i * (j + 1) < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}

/**
 * num_print_putchar - prints a number (< 1000) using _putchar
 * @n: the number to be printed
 *
 * Return: void (nothing)
 */
void num_print_putchar(long int n)
{
	if (n < 10)
	{
		_putchar(n + '0');
	}
	else if (n < 100)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n < 1000)
	{
		_putchar(n / 100 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
