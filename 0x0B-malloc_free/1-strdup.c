#include <stdlib.h>
#include "main.h"
/**
 * _strdup -  function returns a pointer to a new string
 * @str: pointer to character
 * Return: Null if str = Null else return pointer to string
 */
char *_strdup(char *str)
{
	int j;
	int size = _strlen(str);
	char *p = (char *)malloc(size);

	if (str == NULL)
		return (NULL);
	if (p == 0)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		p[j] = str[j];
	return (p);
}
