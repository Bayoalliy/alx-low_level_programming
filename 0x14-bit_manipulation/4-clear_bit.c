#include <stdio.h>
#include "main.h"

/**
 * clear_bit - set bit in an index to 0.
 * @n: decimal to be converted to binary.
 * @index: index in a binary.
 * Return: 1 (if success).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	int ind = index;

	if (ind < 32)
	{
		for (; i <= *n; i <<= 1, ind--)
		{
			if (ind == 0)
			{
				if (*n & i)
				{
					*n = *n ^ i;
					return (1);
				}
				return (1);
			}
		}
		return (1);
	}

	return (-1);
}

