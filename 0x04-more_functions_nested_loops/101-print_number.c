#include <unistd.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * print_number - prints any integer
 *
 *@n : the integer to print
 */

void print_number(int n)
{
	int i;

	int j = n;

	int k = n;

	if (n < 10 && n >= 0)
		_putchar(n + '0');
	else
	{
		if (n < 0)
		{
			j = abs(n);
			k = abs(n);
			_putchar('-');
		}
		do {
			k = k / 10;

		} while (((k * 10) / 10) > 9);

		_putchar(k + '0');

		for (i = 10; i <= j; i *= 10)
		{
			while ((j / 10) > (i - 1))
			{
				j = j / 10;
			}
			_putchar((j % 10) + '0');
			j = n;
		}
	}
}
