#include <stdio.h>
/**
 * main - Entry point, print alphabets in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int num = 30;
	int i;
	char Alpha[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < num; i++)
	{
		if (Alpha[i] == '\0')
		{
			putchar('\n');
			break;
		}
		else
			putchar(Alpha[i]);
	}
return (0);
}
