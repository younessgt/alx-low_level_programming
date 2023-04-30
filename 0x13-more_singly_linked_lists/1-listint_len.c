#include "lists.h"
/**
 * listint_len - function that prints all the elements of a listint_t
 * @h: pointer to structure
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		h = h->next;
		i++;
	}
	i++;
	return (i);
}
