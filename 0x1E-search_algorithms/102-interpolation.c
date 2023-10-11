#include "search_algos.h"
/**
 * interpolation_search - function that searches for a value in a sorted array using
 * interpolation search algo
 * @array: pointer to the array
 * @value: value to search for
 * @size: number of element of array
 * Return: the index of the value or -1 if not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t le, ri, pos, a;

	le = 0;
	ri = size - 1;

	if (array == NULL)
		return (-1);
	/* condition (while) to check if arr[left] <= value <= arr[right] 
	 * checking if the value is in the array or subarray 
	 * to prevent the segumentation fault
	 */
	while (le <= ri && value >= array[le] && value <= array[ri])
	{
		a = ((value - array[le]) * (ri - le)) / ((array[ri] - array[le]));
		pos = le + a;
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			le = pos + 1;

		if (array[pos] > value)
			ri = pos - 1;
	}
	a = ((value - array[le]) * (ri - le)) / ((array[ri] - array[le]));
    pos = le + a;
	printf("Value checked array[%ld] is out of range\n", pos);

	return (-1);
}
