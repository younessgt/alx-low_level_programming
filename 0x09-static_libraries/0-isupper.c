#include "main.h"
/**
 *  _isupper - function that checks for uppercase character
 *  @c: The character that we will check
 *  Return:1 if true 0 if flase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
