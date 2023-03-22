#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 always
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 1023; i >= 0; i--)
	{
		if (i % 3 == 0)
			sum = sum + i;
		else if (i % 5 == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
return (0);
}
