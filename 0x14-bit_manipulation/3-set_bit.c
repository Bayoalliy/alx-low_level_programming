#include <stdio.h>
#include "main.h"

/**
 * set_bit - set bit in an index to 1.
 * @n: decimal to be converted to binary.
 * @index: index in a binary.
 * Return: 1 (if success).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	int ind = index;

	if (ind < 32)
	{
		if (*n == 0 && ind == 0)
			return (0);

		for (; ind >= 0; i <<= 1, ind--)
		{
			if (ind == 0)
			{
				*n = *n | i;
				return (1);
			}
		}
	}
	return (-1);
}

