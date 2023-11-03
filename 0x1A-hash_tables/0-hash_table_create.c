#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - create a hashtable.
 *
 * @size: The size of the array.
 *
 * Return: Always EXIT_SUCCESS.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	if (size <= 0)
	{
		free(table);
		return (NULL);
	}

	table->array = calloc(table->size, sizeof(hash_table_t *));
		if (table->array == NULL)
		{
			free(table->array);
			return (NULL);
		}

	return (table);
}
