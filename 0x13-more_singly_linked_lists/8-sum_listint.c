#include "lists.h"
/**
 * sum_listint - function that calculate the sum of all data
 * in the linked list
 * @head: pointer to structure
 * Return: sum of all data or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;
	return (sum);
}
