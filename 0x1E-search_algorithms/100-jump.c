#include "search_algos.h"
#include <math.h>
/**
 * jump_search - function that searches for a value in
 * a sorted array of integers
 * @array: pointer to the array
 * @value: value to search for
 * @size: number of element of array
 * Return: the index of the value or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, i;

	prev = 0;
	step = sqrt(size);

	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

	while (array[step] < value && prev < size)
	{
		prev = step;
		step += sqrt(size);
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (step > size - 1)
		{
			break;

		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);

	for (i = prev; i <= step; i++)
	{
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
