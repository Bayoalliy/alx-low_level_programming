#include <stdio.h>
/**
 * array_iterator - iterates through an array.
 * @array: our array.
 * @size: size of array.
 * @action: action to perform in each iteration.
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

