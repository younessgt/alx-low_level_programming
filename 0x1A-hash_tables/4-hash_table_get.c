#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: hash table
 * @key: key we search for
 * Return: the value of the key or NULL if there is no such key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	const hash_table_t *table;
	unsigned long int index;
	hash_node_t *head;

	table = ht;
	if (table == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, table->size);
	head = table->array[index];
	while (head != NULL)
	{
		if (strcmp(key, head->key) == 0)
			return (head->value);
		head = head->next;
	}
	return (NULL);
}
