#include "main.h"


/**
 * print_most_numbers - that prints the numbers, from 0 to 9,
 *		followed by a new line. Do not print 2 and 4
 *
 * Return: void (nothing)
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
