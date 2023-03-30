#include "main.h"
/**
 * rot13 - function that encodes a string using rot13.
 * @str: pointer to character
 * Return: str
 */
char *leet(char *str)
{
	int i;
	int j;
	char AL[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char NB[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; AL[j] != '\0'; j++)
		{
			if (str[i] == AL[j])
			{
				str[i] = NB[j];
				bresk;
			}
	}
	return (str);
}
