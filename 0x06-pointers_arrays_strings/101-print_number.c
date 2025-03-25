#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer.
 *
 * @n : integer to be printed.
 *
 */


void print_number(int n)
{
	unsigned int num, abs_num = n, len = 1;

	if (n < 0)
	{
		_putchar('-');
		abs_num *= -1;
	}

	num = abs_num;
	while (num / 10)
	{
		len *= 10;
		num /= 10;
	}

	while (len / 10)
	{
		_putchar((abs_num / len) + 48);
		abs_num %= len;
		len /= 10;
	}
	_putchar(abs_num + 48);
}
