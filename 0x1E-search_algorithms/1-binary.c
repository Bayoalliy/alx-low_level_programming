#include "search_algos.h"

/**
 * binary_search - retrieve the index of a value in an array
 * using binary search algorithm.
 *
 * @array: array to search.
 *
 * @size: size of the array.
 *
 * @value: value to be searched for.
 *
 * Return: index of the value.
 */
int binary_search(int *array, size_t size, int value)
{
	int left, right, mid, i;

	left = 0, right = size - 1;

	while (left < (int)size && right >= 0)
	{
		printf("Searching in array: ");
		i = left;
		while (i <= right)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
			i++;
		}

		printf("\n");

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);

		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}
