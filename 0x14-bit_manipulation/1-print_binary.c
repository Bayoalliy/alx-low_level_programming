#include <stdio.h>
#include "main.h"

/**
 * print_binary - convert decimal to binary.
 * @n: decimal to be converted.
 */

void print_binary(unsigned long int n)
{
	if (n >> 1)
	{
		print_binary(n >> 1);
		if (n & 1)
			_putchar('1');
		else
			_putchar('0');
	}
	else
		_putchar(n + '0');
}

