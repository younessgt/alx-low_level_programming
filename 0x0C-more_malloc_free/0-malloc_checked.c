#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of memory
 * Return: a void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
