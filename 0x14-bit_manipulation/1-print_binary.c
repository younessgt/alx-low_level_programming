#include "main.h"
/**
 * print_binary - function that prints the binary of a number
 * @n: integer
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int n1;
	int count1 = 0, count2;

	n1 = n;
	if (n == 0)
	{
		_putchar(48);
		return;
	}
	while (n1)
	{
		n1 = n1 >> 1;
		count1++;
	}
	for (count2 = count1 - 1; count2 >= 0; count2--)
	{
		if ((n >> count2) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
