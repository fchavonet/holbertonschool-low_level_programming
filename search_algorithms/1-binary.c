#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm.
 *
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: the first index where value is located,
 *         -1 if value is not present in array or if array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;

	size_t left = 0;
	size_t midle = 0;
	size_t right = 0;

	if (array == NULL)
		return (-1);

	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
			else
				printf("\n");
		}

		midle = (left + right) / 2;

		if (array[midle] == value)
			return (midle);
		else if (array[midle] < value)
			left = midle + 1;
		else
			right = midle - 1;
	}

	return (-1);
}
