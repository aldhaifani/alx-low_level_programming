#include "main.h"


/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle
 *
 * Return: void (nothing)
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = size - i - 1; j > 0; j--)
			_putchar(' ');
		for (j = 0; j <= i; j++)
			_putchar('#');
		_putchar('\n');
	}

	if (size < 1)
		_putchar('\n');
}
