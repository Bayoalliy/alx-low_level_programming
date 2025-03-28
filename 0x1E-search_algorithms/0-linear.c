#include "search_algos.h"


/**
 * linear_search - search for a value in an array.
 *
 * @array: pointer to the array.
 * @size: size of the array.
 * @value: value to search for.
 * Return: index of value if success, -1 if failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);

			if (array[i] == value)
				return (i);
		}
	}

	return (-1);
}
