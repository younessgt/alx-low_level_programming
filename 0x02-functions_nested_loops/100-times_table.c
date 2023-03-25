#include "main.h"
/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: number to enter
 * Return: nothing
 */
void print_times_table(int n)
{
	int i;
	int j;
	int m;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			putchar('0');
			for (j = 1; j <= n; j++)
			{
				putchar(',');
				putchar(' ');
				m = i * j;
				if (m <= 9)
				{
					putchar(' ');
					putchar(' ');
					putchar(m + 48);
				}
				else if (m > 9 && m <= 99)
				{
					putchar(' ');
					putchar((m / 10) + 48);
					putchar((m % 10) + 48);
				}
				else if (m > 99)
				{
					putchar((m / 100) + 48);
					putchar(((m % 100) / 10) + 48);
					putchar((m % 10) + 48);
				}
			}
			putchar('\n');
		}
	}
}
