#include "main.h"

/**
 * main - Entry point, Priting _putchar
 * Return: 0
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
