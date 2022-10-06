#include <stdlib.h>
/**
 * malloc_checked - allocated memory.
 * @b : size of memory.
 * Return: void pointer to adress of allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	int *a;

	a = (void *)malloc(b);
	if (a == NULL)
		return ((void *)98);
	return (a);
}
