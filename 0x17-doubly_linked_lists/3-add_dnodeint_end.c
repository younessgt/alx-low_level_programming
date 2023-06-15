#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end
 * of struct list
 * @head: pointer to struct pointer
 * @n: data to enter
 * Return: address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_n;
	dlistint_t *tracker;

	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	new_n->next = NULL;
	if (*head == NULL)
	{
		new_n->prev = NULL;
		*head = new_n;
		return (new_n);
	}
	else
	{
		tracker = *head;
		while (tracker->next != NULL)
			tracker = tracker->next;
		tracker->next = new_n;
		new_n->prev = tracker;
		return (new_n);
	}
}
