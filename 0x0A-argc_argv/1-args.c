#include <stdio.h>
/**
 * main - entry point
 * @argc: number of argument on the command line
 * @argv: argument vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
