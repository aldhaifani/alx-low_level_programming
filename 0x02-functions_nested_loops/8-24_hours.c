#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer,
 *		starting from 00:00 to 23:59
 *
 * Return: void (nothing)
 */
void jack_bauer(void)
{
	int h0, h1, m0, m1;

	for (h0 = 0; h0 <= 2; h0++)
		for (h1 = 0; h1 <= 3; h1++)
			for (m0 = 0; m0 <= 5; m0++)
				for (m1 = 0; m1 <= 9; m1++)
				{
					_putchar(h0 + '0');
					_putchar(h1 + '0');
					_putchar(':');
					_putchar(m0 + '0');
					_putchar(m1 + '0');
					_putchar('\n');
				}
}
