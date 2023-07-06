#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table
 * @key: key that be converted to index
 * @value: value associed with the key
 * Return: 1 if it succeded 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;
	hash_table_t *table;

	table = ht;
	if (table == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, table->size);
/*	printf("index is %lu\n", index);*/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
/*	printf("new_node is %p\n", (void *)new_node);*/
	new_node->key = strdup(key);
/*	printf("key is %s\n", new_node->key);*/
	new_node->value = strdup(value);
/*	printf("value is %s\n", new_node->value);*/
/*	printf("table index is %p\n", (void *)table->array[index]);*/
	if (table->array[index] == 0)
		new_node->next = NULL;
	else
		new_node->next = table->array[index];
	table->array[index] = new_node;
	return (1);
}
