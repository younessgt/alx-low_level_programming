#include <stdlib.h>
/**
 * _strdup -  function returns a pointer to a new string
 * @str: pointer to character
 * Return: Null if str = Null else return pointer to string
 */
char *_strdup(char *str)
{
	int j, size, i = 0;
	char *p;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	size = i;
	p = (char *)malloc(size);
	if (p == 0)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		p[j] = str[j];
	return (p);
}
