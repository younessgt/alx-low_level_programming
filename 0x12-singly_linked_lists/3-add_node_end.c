#include "lists.h"
/**
 * _strlen - function that returns the length of a string
 * @s: the pointer
 * Return: i
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * add_node_end - function that adds a new node at the end of a list_t
 * @head: pointer to pointer
 * @str: pointer to character
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node;
	list_t *p_node;

	p_node = *head;
	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);
	n_node->str = strdup(str);
	n_node->len = _strlen(str);
	n_node->next = NULL;
	if(p_node == NULL)
		*head = n_node;
	else
	{
		while (p_node->next != NULL)
			p_node = p_node->next;
		p_node->next = n_node;

	}
	return (*head);
}
