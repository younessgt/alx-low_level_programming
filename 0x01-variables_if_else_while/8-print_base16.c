#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i;
	int num = 18;
	char Str[] = "0123456789abcdef";

	for (i = 0; i < num; i++)
	{
		if (Str[i] == '\0')
		{
			putchar('\n');
			break;
		}
		else
			putchar(Str[i]);
	}
return (0);
}
