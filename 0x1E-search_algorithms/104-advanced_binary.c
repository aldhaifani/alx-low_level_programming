#include "search_algos.h"


/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Assumptions - array will be sorted in ascending order
 * - value won’t appear more than once in array
 *
 * Return: the index where value is located
 * otherwise, -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}

/**
 * binary_search_recursive - searches for a value
 * using recursive binary search
 * @array: a pointer to the first element of the array to search in
 * @low: lowest point the search range
 * @high: highest point the search range
 * @value: the value to search for
 *
 * Return: the index where value is located
 * otherwise, -1
 */
int binary_search_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	if (low > high)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i == high)
			printf("%i\n", array[i]);
		else
			printf("%i, ", array[i]);
	}

	mid = (high + low) / 2;
	if (array[mid] == value)
	{
		if (array[mid - 1] != value)
			return (mid);
		else
			return (binary_search_recursive(array, low, mid, value));
	}
	else if (array[mid] < value)
		return (binary_search_recursive(array, mid + 1, high, value));
	else
		return (binary_search_recursive(array, low, mid, value));
}
