#include <stdlib.h>
/**
 * array_range - create an array of ints within the range min and max.
 * @min : mininmum range.
 * @max : maximum range.
 * Return: void pointer to adress of created array.
 */

int *array_range(int min, int max)
{
	int *a;

	unsigned int i;

	if (min > max)
		return (NULL);

	a = malloc(((max - min) + 1) * sizeof(int));

	if (a == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
