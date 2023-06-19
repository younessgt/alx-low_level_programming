#include "main.h"
/**
 *  _isdigit - function that checks for a digit
 *  @c: The character that we will check
 *  Return:1 if true 0 if flase
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
