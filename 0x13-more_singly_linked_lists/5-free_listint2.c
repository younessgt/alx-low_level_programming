#include "lists.h"
/**
 * free_listint2 -  function that frees a list_t
 * @head: pointer to pointer
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *stock;
	listint_t *free_list;

	stock = *head;
	if (head == NULL)
		return;
	while (stock != NULL)
	{
		free_list = stock;
		stock = stock->next;
		free(free_list);
	}
	*head = NULL;
}
