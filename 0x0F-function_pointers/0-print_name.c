#include <stdio.h>
/**
 * print_name - function that print a name
 * @name: pointer to character
 * @f: pointer to function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
