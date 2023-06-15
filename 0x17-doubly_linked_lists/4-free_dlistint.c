#include "lists.h"
/**
 * free_dlistint - function that frees a struct list
 * @head: pointer to structure pointer
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tracker;

	tracker = head;
	while (tracker->next!= NULL)
	{
		tracker = tracker->next;
		free(tracker->prev);
	}
	free(tracker);
}
