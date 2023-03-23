#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: the number to enter
 * Return: nothing
 */
void print_number(int n)
{
	int k, m, l, t, l_1, l_2;

	if (n < 0)
	{
		n = -n;
		_putchar(n + '0');
	}
	else if (n >= 10 && n <= 99)
	{
		k = n / 10;
		m = n % 10;
		_putchar(k + '0');
		_putchar(m + '0');
	}
	else if (n >= 100 && n <= 999)
	{
		k = n / 10;
		m = n % 10;
		l = k / 10;
		t = k % 10;
		_putchar(l + '0');
		_putchar(t + '0');
		_putchar(m + '0');
	}
	else if (n >= 1000 && n <= 9999)
	{
		k = n / 10;
		m = n % 10;
		l = k / 10;
		t = k % 10;
		l_1 = l / 10;
		l_2 = l % 10;
		_putchar(l_1 + '0');
		_putchar(l_2 + '0');
		_putchar(t + '0');
		_putchar(m + '0');
	}
}
