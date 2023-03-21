#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	int i;
	char arr[] = "_putchar";

	for (i = 0; i < 10; i++)
	{
		if (arr[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
			_putchar(arr[i]);
	}
return (0);
}
