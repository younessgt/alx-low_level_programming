#include "lists.h"
/**
 * free_listint -  function that frees a list_t
 * @head: pointer to structure
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *free_list
	while (head != NULL)
	{
		free_list = head;
		head = head->next;
		free(free_list);
	}
}
