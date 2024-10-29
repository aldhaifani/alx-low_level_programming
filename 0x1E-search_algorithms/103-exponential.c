#include "search_algos.h"


/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Assumption - array will be sorted in ascending order
 *
 * Return: the first index where value is located
 * otherwise, -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, high, low, mid, j;

	if (!array)
		return (-1);

	for (i = 1; i < size; i *= 2)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
	}

	low = i / 2;
	if (i < size)
		high = i;
	else
		high = size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (j = low; j <= high; j++)
		{
			if (j == high)
				printf("%i\n", array[j]);
			else
				printf("%i, ", array[j]);
		}

		mid = (low + high) / 2;
		if (value == array[mid])
			return (mid);
		else if (value > array[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
