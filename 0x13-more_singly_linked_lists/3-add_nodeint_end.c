#include "lists.h"
/**
 * add_nodeint_end -  function that adds a new node at the end of a list
 * @head: pointer to pointer
 * @n: number to store in the node
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *previous;

	previous = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		while (previous->next != NULL)
			previous = previous->next;
		previous->next = new;

	}
	return (*head);
}
