#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int x = 0;

	return (_sqrt_recursion2(n, x));
}

/**
 * _sqrt_recursion2 - function help to find square root
 * @x: tested root
 * @n: same number of _sqrt_recursion
 * Return: int
 */

int _sqrt_recursion2(int n, int x)
{
	if (n == 0)
		return (0);
	else if (n == x * x)
		return (x);
	else if (n < x * x)
		return (-1);
	return (_sqrt_recursion2(n, x + 1));
}
