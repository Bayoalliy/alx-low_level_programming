#include <stdio.h>
#include <string.h>
/**
 * print_diagsums - print the sum of diagonal elements in an array
 * @a : pointer to an array
 * @size : size of array
 */
void print_diagsums(int *a, int size)
{
	long int i, d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[(size * i) + i];
		d2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%ld, %ld\n", d1, d2);
}
