#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: fisrt pointer to character
 * @accept: sceond pointer to character
 * Return: n number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				n++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (n);
	}
	return (n);
}
