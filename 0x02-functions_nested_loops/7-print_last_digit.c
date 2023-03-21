#include "main.h"
/**
 * print_last_digit -  function that prints the last digit of a number
 * @n: this is tne number that we will check
 * Return: b (always with positive number)
 */
int print_last_digit(int n)
{
	int b;

	if (n < 0)
	{
		b = -n % 10;
		_putchar(b + '0');
		return (b);
	}
	else
	{
		b = n % 10;
		_putchar(b + '0');
		return (b);
	}
}
