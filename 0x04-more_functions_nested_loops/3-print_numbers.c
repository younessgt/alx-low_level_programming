#include "main.h"
/**
 * print_numbers - function that prints the numbers, from 0 to 9
 * Return: nothing
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	putchar('\n');
}
