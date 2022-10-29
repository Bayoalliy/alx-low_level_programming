#include <stdio.h>
#include "main.h"

/**
 * get_bit - get bit in an index.
 * @n: decimal to be converted.
 * @index: index in a binary.
 * Return: value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1;

	int ind = index;

	if (ind >= 32)
		return (-1);
	if (n == 0 && ind == 0)
		return (0);

	for (; i <= n; i <<= 1, ind--)
	{
		if (ind == 0)
		{
			if (n & i)
				return (1);
			else
				return (0);
		}
	}
	return (0);
}

