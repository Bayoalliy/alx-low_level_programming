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
	if (n >> 1)
	{
		if (index == 0)
		{
			if (n & 1)
				return (1);
			else
				return (0);
		}
		get_bit((n >> 1), --index);
	}
	if (index > 0)
		return (-1);
	return (1);
}

