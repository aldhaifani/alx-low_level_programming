#include "main.h"


/**
 * print_square - prints a square, followed by a new line.
 * @size: the size of the square
 *
 * Return: void (nothing)
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}

	if (size < 1)
		_putchar('\n');
}
