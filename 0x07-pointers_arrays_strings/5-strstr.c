#include "main.h"
/**
 * _strstr - Write a function that locates a substring.
 * @haystack: first pointer to character
 * @needle: second pointer to character
 * Return: haystack + i
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == haystack[i])
			return (haystack + i);
	}
	return (0);
}
