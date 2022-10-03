#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - dynamically allocates memory to an array.
 * @size : size of array
 * @c : content of array.
 * Return: pointer to array.
 */
char *create_array(unsigned int size, char c)
{
	char *a;

	unsigned int i;

	a = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}


