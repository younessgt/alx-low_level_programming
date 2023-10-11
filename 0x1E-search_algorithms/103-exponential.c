#include "search_algos.h"
/**
 * binary_search_2 - function that searches for a value in a sorted array using
 * binary search algo
 * @array: pointer to the array
 * @value: value to search for
 * @left: left index
 * @right: right index
 * Return: the index of the value or -1 if not found
 */

int binary_search_2(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;


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

/**
 * min - function that return the minimum of two integers
 * @x: first integer
 * @y: second integer
 * Return: min of x and y
 */

int min(int x, int y)
{
	if (x > y)
		return (y);
	else
		return (x);
}

/**
 * exponential_search - function that searches for a value in
 * a sorted array of integers
 * @array: pointer to the array
 * @value: value to search for
 * @size: number of element of array
 * Return: the index of the value or -1 if not found
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);
	i = 1;
	while (array[i] < value && i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	printf("Value found between indexes [%ld] and [%d]\n",
		   i / 2, min(i, size - 1));
	return (binary_search_2(array, i / 2, min(i, size - 1), value));
}
