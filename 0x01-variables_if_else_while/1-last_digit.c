#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last_digit_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit_n = n % 10;

	printf("Last digit of %d is ", n);

	if (last_digit_n == 0)
		printf("0 and is 0\n");
	else if (last_digit_n > 5)
		printf("%d and is greater than 5\n", last_digit_n);
	else
		printf("%d and is less than 6 and not 0\n", last_digit_n);

	return (0);
}
