#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		if (a < 0 && b < 0 && c < 0)
		{
			if (b > c)
				largest = c;
			else
				largest = b;
		}
		else
			largest = a;
	}
	else if (b > a && b > c)
	{
		if (a < 0 && b < 0 && c < 0)
		{
			if (a > c)
				largest = c;
			else
				largest = a;
		}
		else
			largest = b;
	}
	else if (c > a && c > b)
	{
		if (a < 0 && b < 0 && c < 0)
		{
			if (a > b)
				largest = b;
			else
				largest = a;
		}
		else
			largest = c;
	}
	return (largest);
}
