#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i;
	int n = 10;

	for (i = 0; i < n; i++)
	{
		if (i == 9)
		{
			printf("%d\n", i);
		}
		else
			printf("%d", i);
	}
return (0);
}
