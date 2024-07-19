#include "search_algos.h"

/**
 * interpolation_search - searches for a value
 * in a sorted array of integers using the
 * Interpolation search algorithm.
 *
 * @array: array to be searched.
 *
 * @size: size of the array.
 *
 * @value: value to be searched for.
 *
 * Return: index of the value.
 */
int interpolation_search(int *array, size_t size, int value)
{
	int high, low, pos;

	high = size - 1;
	low = 0;


	while (low < (int)size && high >= 0)
	{
		pos = low + (((double)(high - low) / (array[high] -
		array[low])) * (value - array[low]));

		if (pos > (int)size - 1)
		{
			printf("Value checked array[%d] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);

		if (array[pos] > value)
			high = pos - 1;

		else
			low = pos + 1;
	}

	return (-1);
}


