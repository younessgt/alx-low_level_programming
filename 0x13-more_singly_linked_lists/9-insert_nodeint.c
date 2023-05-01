#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts
 * a new node at a given position
 * @head: pointer to pointer
 * @idx: place to add the node
 * @n: data
 * Return: address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *add;
	listint_t *temp1 = *head;

	if (head == NULL)
		return (NULL);
	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	if (idx == 0)
	{
		add->next = *head;
		*head = add;
		return (*head);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (temp1 == NULL || temp1->next == NULL)
		{
			free(add);
			return (NULL);
		}
		 temp1 = temp1->next;
	}
	add->next = temp1->next;
	temp1->next = add;
	return (*head);
}
