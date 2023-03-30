#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @str: pointer to character
 * Return: str
 */
char *leet(char *str)
{
	int i;
	int j;
	char AL[] = "aeotlAEOTL";
	char NB[] = "4307143071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; AL[j] != '\0'; j++)
		{
			if (str[i] == AL[j])
				str[i] = NB[j];
		}
	}
	return (str);
}
