#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - allocates memory to a 2D array.
 * @width : column of array.
 * @height : row of array.
 * Return: pointer to 2D array.
 */
int **alloc_grid(int width, int height)
{
	int **a;

	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int) * width);

	for (i = 0; i < height; i++)
		a[i] = malloc(sizeof(a) * height);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	return (a);
}


