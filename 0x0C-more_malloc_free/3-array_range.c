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
	if (min == max)
	{
		p = malloc(sizeof(int));
		if (p == NULL)
			return (NULL);
		p[0] = min;
		return (p);
	}
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	if (min <= 0)
	{
		for (i = 0; i <= max - min; i++)
		{
			p[i] = min + i;
		}
	}
	else
	{
		for (i = 0; i < max; i++)
		{
			p[i] = min + i;
		}
	}
return (p);
}
