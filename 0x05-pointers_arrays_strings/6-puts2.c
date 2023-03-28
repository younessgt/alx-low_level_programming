#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: the pointer
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
		i++;
	i--;
	for (n = 0; n <= i, n++)
	{
		if (n % 2 == 0)
			_putchar(str[n]);
	}
	_putchar('\n');
}
