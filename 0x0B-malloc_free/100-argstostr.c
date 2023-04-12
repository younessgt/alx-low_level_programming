#include <stdlib.h>
#include "main.h"
/**
 * argstostr - function that concatenates all the arguments of the program
 * @ac: number of argument
 * @av: pointer to pointer to chararcter
 * Return: pointer to character if successed else return NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	char *p;

	if (ac == 0 || av == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			k++;
		k++;
	}
	p = (char *)malloc(k * sizeof(char));
	if (p == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[k] = av[i][j];
			k = k + 1;
		}
		p[k] = '\n';
		k = k + 1;
	}
	p[k] = '\0';
	return (p);
}
