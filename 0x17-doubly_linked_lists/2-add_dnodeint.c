#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning
 * of struct list
 * @head: pointer to struct pointer
 * Return: address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_n;

	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	new_n->next = *head;
	if (*head != NULL)
		(*head)->prev = new_n;
	new_n->prev = NULL;
	*head = new_n;
	return (new_n);
}
