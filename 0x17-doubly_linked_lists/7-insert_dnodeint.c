#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node at
 * a given position
 * @h: pointer to structure pointer
 * @idx : index where the new node should be added
 * @n: data
 * Return: new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 1;
	dlistint_t *tracker = *h;
	dlistint_t *new_n;


	if (idx == 0)
		return (add_dnodeint(h, n));
	tracker = tracker->next;
	while (tracker != NULL)
	{
		if (idx == i)
		{
			if (tracker->next == NULL)
				return (add_dnodeint_end(h, n));
			new_n = malloc(sizeof(dlistint_t));
			if (new_n == NULL)
				return (NULL);
			new_n->next = tracker;
			new_n->n = n;
			new_n->prev = tracker->prev;
			tracker->prev->next = new_n;
			tracker->prev = new_n;
			return (new_n);
		}
		i++;
		tracker = tracker->next;
	}
	return (NULL);
}
