#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: the pointer
 * @n: number of element of the array.
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int va;

	for (i = 0; i < n - 1; i++)
	{
		va = a[i];
		a[i] = a[n - 1];
		a[n - 1] = va;
		n--;
	}
}
