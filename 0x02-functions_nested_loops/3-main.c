#include "main.h"
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('h');
        _putchar(r + '0');
	r = _islower(108);
        _putchar(r + '0');
	r = _islower(20);
        _putchar(r + '0');
	r = _islower(70);
        _putchar(r + '0');
	_putchar('\n');

return (0);
}
