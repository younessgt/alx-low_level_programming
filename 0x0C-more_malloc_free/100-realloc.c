#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: void pointer that is pointing to the the previous
 * allocated memory
 * @old_size: integer that present the old size
 * @new_size: new size to allocate
 * Return: Null if it fails else return void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = (char *)malloc(new_size);
		return (p);
	}
	if (new_size < old_size)
	{
		p = (char *)malloc(new_size);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < new_size; i++)
			p[i] = *((char *)ptr + i);
		free(ptr);
		return (ptr);
	}
	p = (char *)malloc(new_size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		p[i] = *((char *)ptr + i);
	free(ptr);
	return (ptr);
}
