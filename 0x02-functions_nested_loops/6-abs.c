#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @n: the number to be computed
 *
 * Return: the absolute value of a given number
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
