#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head;
	hash_table_t *table;
	unsigned long int i;

	table = ht;
	if (table == NULL)
		return;
	for (i = 0; i < table->size; i++)
	{
		while (table->array[i] != NULL)
		{
			head = table->array[i];
			table->array[i] = table->array[i]->next;
			free(head->key);
			free(head->value);
			free(head);
		}
	}
	free(table->array);
	free(table);
}
