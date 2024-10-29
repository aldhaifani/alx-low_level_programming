#include "main.h"
#include <stdio.h>
#include <ctype.h>


/**
 * print_buffer - function that prints a buffer.
 * @b: pointer to the buffer to be printed
 * @size: size of the buffer
 *
 * Return: nth, void
 */
void print_buffer(char *b, int size)
{
	int i, j, k;

	for (i = 0; i < size ; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < size && j < i + 10; j += 2)
		{
			if (j + 1 < size)
				printf("%02x%02x ", b[j], b[j + 1]);
			else
				printf("%02x ", b[j]);
		}

		if (j % 10 != 0)
		{
			for (k = 1; k <= (10 - (j % 10) + 1); k++)
				printf("  ");
			for (k = 0; k < (10 - (j % 10) + 1) / 2; k++)
				printf(" ");
			}

		for (j = i; j < size && j < i + 10; j++)
		{
			if (isprint(b[j]))
				printf("%c", b[j]);
			else
				printf(".");
		}
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
