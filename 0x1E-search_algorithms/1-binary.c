#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array using
 * binary search algo
 * @array: pointer to the array
 * @value: value to search for
 * @size: number of element of array
 * Return: the index of the value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int left, right, mid, i;

	left = 0;
	right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i < right)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;

		if (array[mid] > value)
			right = mid - 1;
	}

	return (-1);
}
