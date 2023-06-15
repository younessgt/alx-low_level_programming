#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of
 * struct list
 * @head: pointer to structure
 * @index: the index of the wanted node
 * Return: the nth node or NUll if it failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tracker = head;
	unsigned int i;

	for (i = 0; tracker != NULL; i++)
	{
		if (i == index)
			return (tracker);
		tracker = tracker->next;
	}
	return (NULL);
}
