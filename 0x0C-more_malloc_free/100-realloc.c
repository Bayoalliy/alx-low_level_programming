#include <stdlib.h>
/**
 * _realloc - reallocates memory block.
 * @ptr : pointer to the old memory block.
 * @old_size : size of the old memory block.
 * @new_size : size of the new memory block.
 * Return: void pointer to adress of new memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);

	if (new_size > old_size)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
