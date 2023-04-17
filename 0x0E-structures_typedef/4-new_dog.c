#include <stdlib.h>
#include "dog.h"
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
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
