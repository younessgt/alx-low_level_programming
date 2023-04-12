#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - function that returns the length of a string
 * @s: the pointer
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * strtow -  function that splits a string into words
 * @str: pointer to character
 * Return: NUll if it fails else return pointer to pointer to character
 */
char **strtow(char *str)
{
	int i, j, m, k = 0, l = 0;
	char **p;

	if (str == NULL || _strlen(str) == 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			l++;
	}
	if (l == 0)
		return (NULL);
	p = (char **)malloc(sizeof(char *) * (l + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		while (str[k] == ' ')
			k++;
		m = k;
		while (str[k] != ' ' && str[k] != '\0')
			k++;
		p[i] = (char *)malloc(sizeof(char) * (k - m + 1));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < k - m; j++)
		{
			p[i][j] = str[j + m];
		}
		p[i][j] = '\0';
	}
	p[l] = NULL;
	return (p);
}
