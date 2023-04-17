#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to structure
 * @name: pointer to dog name
 * @age: pointer to the age
 * @owner: pointer to the owner of the dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
