#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: the pointer
 * Return: i
 */
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;
	return (i);
}
