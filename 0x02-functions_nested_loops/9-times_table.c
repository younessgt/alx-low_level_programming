#include "main.h"
/**
 * times_table - function that prints the 9 times table starting with 0
 * Return : nothing
 */
void times_table(void)
{
	int C;
	int x;
	int mu;

	for (C = 0; C <= 9; C++)
	{
		_putchar('0');

		for (x = 1; x <= 9; x++)
		{
			_putchar(',');
			_putchar(' ');

			mu = C * x;

			if (mu <= 9)
				_putchar(' ');
			else
				_putchar((mu / 10) + '0');

			_putchar((mu % 10) + '0');
		}
		_putchar('\n');
	}
}
