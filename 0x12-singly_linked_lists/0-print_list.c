#include "lists.h"
/**
 * print_list - function that print all element of a list_t
 * @h : pointer to structure
 * Return: nombre of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	if (h->str == NULL && h->next == NULL)
	{
		printf("[0] (nil)\n");
		i++;
	}
	else
	{
		while (h->next != NULL)
		{
			if (h->str == NULL)
			{
				printf("[0] (nil)\n");
				i++;
			}
			else if (h->str != NULL)
			{
				printf("[%u] %s\n", h->len, h->str);
				i++;
			}
			h = h->next;
		}
		i++;
		printf("[%u] %s\n", h->len, h->str);
	}
	return (i);
}
