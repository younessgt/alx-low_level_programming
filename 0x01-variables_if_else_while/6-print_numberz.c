#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int size = 10;
	int i;
	int num = 0;

	for (i = 0; i < size; i++)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
return (0);	
}
