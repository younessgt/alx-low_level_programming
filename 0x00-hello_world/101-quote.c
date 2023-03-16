#include <stdio.h>
/**
 * main - Enter point
 * Return: 0
 */
int main(void)
{
	int max = 120;
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	for (int i=0; i < max; i++)
	{
	if (str[i] == '\0')
	{
	putchar('\n');
	break;
	}
	else putchar(str[i]);
	}
return (1);
}
