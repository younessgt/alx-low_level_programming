#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: first pointer to character
 * @s2: second pointer
 * Return: NULL if it fails else return pointer to character
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0;
	int l, m;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	p = (char *)malloc(i + j + 2);
	if (p == 0)
		return (NULL);
	for (l = 0; s1[l] != '\0'; l++)
		p[l] = s1[l];
	for (m = l; s2[k] != '\0'; m++)
	{
		p[m] = s2[k];
		k++;
	}
	if (p[m] != '\0')
		p[m] = '\0';
	return (p);
}
