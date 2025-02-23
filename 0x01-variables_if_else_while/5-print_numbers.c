#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	putchar(10);

	return (0);
}
