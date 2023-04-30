#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t
 * @h: pointer to structure
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	i++;
	printf("%d\n", h->n);
	return (i);
}
