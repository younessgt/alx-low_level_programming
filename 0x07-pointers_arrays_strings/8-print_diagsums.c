#include "main.h"
/**
 * print_diagsums - function that prints the sum of the two diagonals of matrix
 * @a: pointer
 * @size: integer
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int SumRight = 0, SumLeft = 0;

	for (i = 0; i < size; i++)
	{
		SumRight = SumRight + a[i * size + i];
	}

	for (j = size - 1; j >= 0; j--)
	{
		SumLeft = SumLeft + a[j * size + (size - j - 1)];
	}

	printf("%d, %d\n", SumRight, SumLeft);
}
