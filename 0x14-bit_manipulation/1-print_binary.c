#include <stdio.h>
#include "main.h"

/**
 * print_binary - convert decimal to binary.
 * @n: decimal to be converted.
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 1;

	if (n == 0)
		_putchar('0');
	else if (n == 1)
		_putchar('1');
	else
	{
		while (i * 2 <= n)
			i *= 2;
		for (; i > 0; i >>= 1)
		{
			if ((n & i) == 0)
				_putchar('0');
			else
				_putchar('1');
		}
	}
}
