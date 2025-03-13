#include <stdio.h>


/**
 * main - Entry point of the program
 *		prints the numbers from 1 to 100, followed by a new line
 *		for multiples of three print Fizz instead of the number
 *		for the multiples of five print Buzz
 *		numbers which are multiples of both three and five print FizzBuzz.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	printf("1 ");

	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (i < 100)
				printf(" ");
			else
				printf("\n");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
