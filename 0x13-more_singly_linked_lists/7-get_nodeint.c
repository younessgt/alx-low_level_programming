#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of linked list
 * @head: pointer to structure
 * @index: index of the node
 * Return: demanded  node or NUll if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0, j;
	listint_t *temp1;
	listint_t *temp2;

	temp1 = head;
	temp2 = head;
	if (temp1 == NULL)
		return (NULL);
	while (temp1 != NULL)
	{
		temp1 = temp1->next;
		i++;
	}
	if (index > i)
		return (NULL);
	else if (index == 0)
		return (temp2);
	for (j = 0; j <= index - 1; j++)
		temp2 = temp2->next;
	return (temp2);
}
