#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: first value of the array
 * @max: last value of the array
 * Return: NULL if it fails else return pointer to integer
 */
int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
	{
		p[i] = min;
		min++;
	}
return (p);
}
