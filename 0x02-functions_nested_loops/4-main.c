#include "main.h"
/**
 * main - Entry point
 * Return (0);
 */
int main(void)
{
	int r;
	r = _isalpha('H');
	_putchar(r + '0');
       	r = _isalpha('h');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
return (0);
}
