#include "search_algos.h"
/**
 * linear_search - functions that searches fo a value in an array of integers
 * using linear search algo
 * @array: pointer to the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where the value is located or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
