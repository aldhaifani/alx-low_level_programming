#include "main.h"

/**
 * factorial - a funtion that returns the factorial of a given number
 * @n: the number to be used
 *
 * Return: the factorial of n, n!, int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
