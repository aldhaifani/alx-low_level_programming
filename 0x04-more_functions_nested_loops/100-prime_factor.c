#include <stdio.h>
#include <math.h>


/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int maxPrimeFactor, n, i;

	n = 612852475143;

	/**
	 * n is odd
	 * so no need to check for the factor 2
	 * get rid of the factor 3
	 */
	maxPrimeFactor = 3;
	while (n % 3 == 0)
		n /= 3;
	
	/**
	 * Now we have to only check for other factors
	 * other than 2 and 3
	 */
	for (i = 5; i <= sqrt(n); i += 6)
	{
		while (n % i == 0)
		{
			maxPrimeFactor = i;
			n /= i;
		}
		while (n % (i + 2) == 0)
		{
			maxPrimeFactor = i + 2;
			n /= (i + 2);
		}
	}
	if (n > maxPrimeFactor)
		maxPrimeFactor = n;
	printf("%lu\n", maxPrimeFactor);

	return (0);
}
