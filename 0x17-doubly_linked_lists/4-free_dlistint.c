#include "lists.h"
/**
 * free_dlistint - function that frees a struct list
 * @head: pointer to structure pointer
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tracker;

	while (head != NULL)
	{
		tracker = head;
		head = head->next;
		free(tracker);
	}
}
