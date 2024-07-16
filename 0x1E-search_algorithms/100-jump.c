#include "search_algos.h"
#include <math.h>

/**
 * jump_search - retrieve the index of a value from an array using
 * jump search algorithm.
 *
 * @array: array to be searched.
 *
 * @size: size of the array.
 *
 * @value: value to search for.
 *
 * Return: index of value.
 */
int jump_search(int *array, size_t size, int value)
{
	int left, right, i;

	left = 0, right = sqrt(size);

	while (left < (int)size)
	{

		printf("Value checked array[%d] = [%d]\n", left, array[left]);
		if (array[right] >= value || right >= (int)size)
		{
			printf("Value found between indexes [%d] and [%d]\n", left, right);
			i = left;
			while (i <= right && i < (int)size)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);

				i++;
			}
			return (-1);
		}
		else
		{
			left = left + sqrt(size);
			right = right + sqrt(size);
		}
	}

	return (-1);
}
