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
	int sum;
	int j;

	if (argc == 1)
		printf("0\n");
	else if (argc > 1)
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			for (j = 0; *(*(argv + i) + j) != '\0'; j++)
			{
				if (*(*(argv + i) + j) < '0' || *(*(argv + i) + j) > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(*(argv + i));
		}
		printf("%d\n", sum);
	}
	return (0);
}
