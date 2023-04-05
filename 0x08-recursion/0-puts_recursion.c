#include "main.h"
/**
 * _puts_recursion - function that prints a string
 * @s: pointer to character
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[i]);
		i++;
		_puts_recursion(s + i);
	}
}
