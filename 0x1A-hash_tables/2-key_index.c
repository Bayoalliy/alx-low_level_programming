#include "hash_tables.h"

/**
 * key_index - compute the index of a key.
 *
 * @key: string to be into index.
 *
 * @size: size of the array.
 *
 * Return: Index at which key/value pair would be stored.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value, index;

	hash_value = hash_djb2((unsigned char *)key);

	index = hash_value % size;

	return (index);
}

