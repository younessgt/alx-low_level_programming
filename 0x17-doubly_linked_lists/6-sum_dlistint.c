#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data of
 * the structure list
 * @head: pointer to structure
 * Return: sum or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tracker = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (tracker != NULL)
	{
		sum += tracker->n;
		tracker = tracker->next;
	}
	return (sum);
}
