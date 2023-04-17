#include <stdlib.h>
#include "dog.h"
/**
 * _strcpy - copies the string pointed to by src,
 * @dest: first pointer
 * @src: second pointer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
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
 * new_dog -  function that creates a new dog
 * @name: pointer to dog name
 * @age: pointer to the age
 * @owner: pointer to the dog owner
 * Return: NULL if it fails else return pointer to structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	p->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	_strcpy(p->name, name);
	p->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	_strcpy(p->owner, owner);
	p->age = age;
	return (p);
}
