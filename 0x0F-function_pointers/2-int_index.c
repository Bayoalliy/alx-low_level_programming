#include <stdio.h>
/**
 * int_index - searches for an integer.
 * @array: array of integers.
 * @size: size of array.
 * @cmp: check if an integer meets a particular criteria.
 * Return: index of the first integer that meets the criteria.
 */



int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
