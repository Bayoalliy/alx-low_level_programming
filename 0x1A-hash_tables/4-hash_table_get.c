#include "hash_tables.h"

/**
 * hash_table_get - retrieve value from hash table.
 * @key: key stored in the hash table.
 * @ht: hash table.
 * Return: pointer to the value.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	char *val;

	index = key_index((unsigned char *)key, ht->size);

	if (index > (ht->size) - 1)
		return (NULL);

	val = strdup(ht->array[index]->value);
	if (val == NULL || *val == '\0')
		return (NULL);
	return (val);
}
