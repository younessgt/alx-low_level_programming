#include "lists.h"
/**
 * reverse_listint - function that reverse a linked list
 * @head: pointer to pointer
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1, *temp2;

	temp1 = NULL;
	if (head == NULL || *head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		temp2 = (*head)->next;
		(*head)->next = temp1;
		temp1 = *head;
		*head = temp2;
	}
	*head = temp1;
	return (*head);
}
