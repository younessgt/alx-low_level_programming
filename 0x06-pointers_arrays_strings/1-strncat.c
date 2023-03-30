#include "main.h"
/**
 * _strncat -  function that concatenates two strings
 * @dest: first pointer to character
 * @src: second pointer to character
 * @n: integer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int p;

	while (dest[i] != '\0')
		i++;
	p = i;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[p] = src[i];
		p++;
	}
	dest[p] = '\0';
	return (dest);
}
