#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 9; j++)
			for (k = 0; k <= 9; k++)
				for (l = j + 1; l <= 9 && (i * 10 + j) < (k * 10 + l); l++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					if ((i * 10 + j) != 98)
					{
						putchar(',');
						putchar(' ');
					}
				}
	putchar('\n');

	return (0);
}
