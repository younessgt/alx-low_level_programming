#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - entry point, printing the program's name
 * @argc: integer count number of arguments
 * @argv: argument vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc-1]);
	return (0);
}
