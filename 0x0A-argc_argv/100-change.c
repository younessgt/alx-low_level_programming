#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n, m, m1, m2, m3;

	n = atoi(argv[argc - 1]);
	if (argc == 2)
	{
		if (n < 0)
			printf("0\n");
		else
		{
			m = n % 25;
			m1 = m % 10;
			m2 = m1 % 5;
			m3 = m2 % 2;
			printf("%d\n", n / 25 + m / 10 + m1 / 5 + m2 / 2 + m3);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
