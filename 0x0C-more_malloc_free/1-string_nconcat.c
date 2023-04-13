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
 * string_nconcat -  function that concatenates two strings
 * @s1: pointer to string1
 * @s2: pointer to string2
 * @n: number of character to copy from string 2
 * Return: NULL if it fails else return pointer to that new
 * allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l, l1, i, j;
	char *p;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	l = _strlen(s1);
	l1 = _strlen(s2);
	if (n >= l1)
		n = l1;
	p = (char *)malloc(sizeof(char) * (l + n + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
		p[i] = s1[i];
	j = 0;
	while (n > 0)
	{
		p[i] = s2[j];
		i++;
		j++;
		n--;
	}
	p[i] = '\0';
return (p);
}
