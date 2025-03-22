#include <stdio.h>
#include <string.h>
/**
 * reverse_array - reverse an array of integers.
 * @a : pointer to the array.
 * @n : suze of the array.
 * Return: integer
 */
void reverse_array(int *a, int n)
{
	int i = 0, *z = a + (n - 1), tmp;

	while (i < n / 2)
	{
		tmp = *a;
		*a = *z;
		*z = tmp;
		a++;
		z--;
		i++;
	}
}
