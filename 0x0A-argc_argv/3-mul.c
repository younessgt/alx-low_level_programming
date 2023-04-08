#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	int Mu = 1;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			Mu = Mu * atoi(argv[i]);
		}
	}
	printf("%d\n", Mu);
	return (0);
}
