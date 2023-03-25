#include <stdio.h>
/**
 * main - program that finds and prints the sum of the even-valued terms
 * Return: 0 always
 */
int main(void)
{
	int i = 0;
	int j = 1;
	int sum1;
	int sum2;

	while (sum1 < 4000000)
	{
		sum1 = i + j;
		i = j;
		j = sum1;
		if (sum1 % 2 == 0)
			sum2 = sum2 + sum1;
	}
	printf("%d", sum2);
return (0);
}
