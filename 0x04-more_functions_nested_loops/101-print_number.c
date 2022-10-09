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
	unsigned int i;

	unsigned int j = n;

	unsigned int k = n;

		if (n < 0)
		{
			j = abs(n);
			n = abs(n);
			k = abs(n);
			_putchar('-');
		}


	if (n < 10 && n >= 0)
		_putchar(n + '0');
	else
	{
		do {
			k = k / 10;

		} while (((k * 10) / 10) > 9);

		_putchar(k + '0');

		for (i = 10; i <= j; i *= 10)
		{
			if (i % 10 == 0)
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
}
