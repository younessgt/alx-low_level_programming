#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	const hash_table_t *table;
	hash_node_t *head;
	unsigned long int i;
	bool j;

	table = ht;
	j = false;
	if (table == NULL)
		return;
	printf("{");
	for (i = 0; i < table->size; i++)
	{
		head = table->array[i];
		while (head != NULL)
		{
			if (j)
				printf(", ");
			if (head->next != NULL)
			{
				printf("'%s': '%s', ", head->key, head->value);
				j = false;
			}
			if (head->next == NULL)
			{
				printf("'%s': '%s'", head->key, head->value);
				j = true;
			}
			head = head->next;
		}
	}
	printf("}\n");
}
