#include "main.h"
#include <stdio.h>


/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: pointer to the first element of the matrix (0, 0)
 * @size: number of the rows of the matrix
 *
 * Return: nth, void
 */
void print_diagsums(int *a, int size)
{
	long int rl = 0, lr = 0;
	int i, n = size * size;

	for (i = 0; i < n; i += size + 1)
		rl += a[i];
	for (i = size - 1; i <= n - size + 1; i += size - 1)
		lr += a[i];

	printf("%ld, %ld\n", rl, lr);
}
