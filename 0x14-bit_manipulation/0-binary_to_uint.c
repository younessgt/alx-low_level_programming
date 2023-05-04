#include "main.h"
/**
 * _pow_recursion - function that returns
 * the value of x raised to the power of y
 * @x: the number
 * @y: the power
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	y--;
	return (x * _pow_recursion(x, y));
}
/**
 * _strlen - function that returns the length of a string
 * @s: the pointer
 * Return: i
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to character
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int k, n, i;

	if (b == NULL)
		return (0);
	n = _strlen(b);
	k = n;
	for (i = 0; i < n; i++)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		sum += (b[i] - 48) * _pow_recursion(2, k - 1);
		k--;
	}
	return (sum);
}
