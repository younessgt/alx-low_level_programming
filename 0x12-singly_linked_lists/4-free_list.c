#include "lists.h"
/**
 * free_list -  function that frees a list_t
 * @head: pointer to structure
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *free_node;

	while (head != NULL)
	{
		free_node = head;
		head = head->next;
		free(free_node->str);
		free(free_node);
	}
}
