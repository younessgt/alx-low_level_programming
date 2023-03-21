#include "main.h"
/**
 *  _islower - function that checks for lowercase character
 *@c: variable that we check
 *  Return: 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (0);
	else
		return (1);
}
