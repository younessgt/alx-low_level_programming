#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at chosen index
 * @head: pointer to pointer
 * @index: index of the node that should be deleted
 * Return: 1 (success)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp1;
	listint_t *temp2;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp1 = *head;
		*head = temp1->next;
		free(temp1);
		return (1);
	}
	temp1 = *head;
	for (i = 0; i < index - 1 && (temp1 != NULL); i++)
		temp1 = temp1->next;
	if (temp1 == NULL)
		return (-1);
	temp2 = temp1->next;
	temp1->next = temp2->next;
	free(temp2);
	return (1);
}
