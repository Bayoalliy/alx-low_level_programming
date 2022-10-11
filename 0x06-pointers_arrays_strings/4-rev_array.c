#include <stdio.h>
#include <string.h>
/**
 * _strcmp - compare one string with another
 * @s1 : pointer to the first string
 * @s2 : pointer to the second string
 * Return: integer
 */
void reverse_array(int *a, int n)
{
	int i, j = 0, *b = a;

	for (i = n; i >= 0; i--)
	{
		b[j] = a[i];
		j++;
	}
}
