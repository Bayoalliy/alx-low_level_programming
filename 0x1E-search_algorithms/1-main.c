#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 8, binary_search(array, size, 8));

    printf("Found %d at index: %d\n\n", 7, binary_search(array, size, 7));
    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 0, binary_search(array, 1, 0));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n\n", 1, binary_search(array, 2, 1));

    printf("Found %d at index: %d\n\n", 999, binary_search(array, size, 999));
    return (EXIT_SUCCESS);
}
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
