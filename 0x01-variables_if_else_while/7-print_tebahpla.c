#include <stdio.h>
/**
 * main - Entry point, print alphabets in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	char Alpha[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 25; i >= 0; i--)
	{
		putchar(Alpha[i]);
	}
	putchar('\n');
return (0);
}
