#include "search_algos.h"
#include <math.h>


/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Assumptions - array will be sorted in ascending order
 *
 * Return: the first index where value is located
 * otherwise, -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t m, i, j;

	if (!array)
		return (-1);

	m = floor(sqrt(size));
	for (i = 0; i < size; i += m)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", i - m, i);
	for (j = i - m; j < size && j >= 0; j++)
	{
		printf("Value checked array[%lu] = [%i]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}

	return (-1);
}
