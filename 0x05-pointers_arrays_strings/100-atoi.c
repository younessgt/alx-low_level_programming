#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 * @s: pointer to character
 * Return: result
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int digit = 0;
	int negative = 1;
	int result;

	while (s[i] != '\0')
	{
		if (s[i] == 45)
			negative = negative * (-1);
		else if (s[i] >= 48 && s[i] <= 57)
		{
			digit = (digit * 10) + (s[i] - 48);
		}
		i++;

	}
	result = digit * negative;
	return (result);
}
