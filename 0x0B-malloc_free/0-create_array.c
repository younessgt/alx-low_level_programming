#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * @size: size of array
 * @c: the character to be initialized with
 * Return: Null if size is 0 else return pointer to character
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = (char *)malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	if (p == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
