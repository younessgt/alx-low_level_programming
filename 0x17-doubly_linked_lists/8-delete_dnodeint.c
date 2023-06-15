#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes a node at a given index
 * @head: pointer to structure pointer
 * @index: index of the node
 * Return: 1 if success or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tracker = *head;
	unsigned int i = 1;

	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(tracker);
		return (1);
	}
	tracker = tracker->next;
	while (tracker != NULL)
	{
		if (index == i && tracker->next != NULL)
		{
			tracker->prev->next = tracker->next;
			tracker->next->prev = tracker->prev;
			free(tracker);
			return (1);
		}
		if (index == i && tracker->next == NULL)
		{
			tracker->prev->next = NULL;
			free(tracker);
			return (1);
		}
		i++;
		tracker = tracker->next;
	}
	return (-1);
}
