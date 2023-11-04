#include "hash_tables.h"

/**
 * hash_table_set - adds element to the hash table.
 *
 * @key: string to be into indexed.
 *
 * @value: value to be stored.
 *
 * @ht: hash table.
 *
 * Return: 1 if succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	if (node->value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	return (1);


}

