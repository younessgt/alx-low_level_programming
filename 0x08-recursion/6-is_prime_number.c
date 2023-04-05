#include "main.h"
/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: number to check
 * Return: 1 if prime number otherwise return 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (is_prime_number2(n, i));
}
/**
 * is_prime_number2 - function that help to find the prime number
 * @n: number to check
 * @i: divisor
 * Return: 1 if prine or 0 if not
 */
int is_prime_number2(int n, int i)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i > 9)
		return (1);
	if (n % i == 0 && n == i)
		return (1);
	return (is_prime_number2(n, i + 1));
}
