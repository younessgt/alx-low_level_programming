#include "lists.h"
/**
 * pop_listint - function that deletes the head node of linked list
 * @head: pointer to pointer
 * Return: i (removed node data) or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
		return (0);
	temp = *head;
	i = temp->n;
	*head = temp->next;
	free(temp);
	return (i);
}
