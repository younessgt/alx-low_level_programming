#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer to character
 * Return: i length of string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (0);
	i++;
	i = i + _strlen_recursion(s + i);
	return (i);
}
