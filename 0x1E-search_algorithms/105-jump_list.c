#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted linked list of integers
 * using the Jump search algorithm.
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: the value to search for
 *
 * Assumption - list will be sorted in ascending order
 *
 * Return: a pointer to the first node where value is located
 * otherwise NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t m, i, left_range;
	listint_t *head = NULL, *temp = NULL;

	if (!list)
		return (NULL);

	head = list;
	temp = list;

	m = floor(sqrt(size));
	while (head)
	{
		for (i = 0; i < m; i++)
		{
			if (head->next == NULL)
				break;
			head = head->next;
		}
		printf("Value checked at index [%lu] = [%i]\n", head->index, head->n);
		if (head->n >= value || head->next == NULL)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			head->index - m, head->index);
	if (head->next == NULL)
		left_range = head->index - m + 1;
	else
		left_range = head->index - m;
	for (i = 0; i < left_range; i++)
		temp = temp->next;
	for (i = 0; i < m; i++)
	{
		printf("Value checked at index [%lu] = [%i]\n", temp->index, temp->n);
		if (temp->n == value)
			return (temp);
		temp = temp->next;
		}

	return (NULL);
}
