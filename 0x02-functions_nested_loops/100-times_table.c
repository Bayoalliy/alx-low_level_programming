
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * print_times_table - prints multiplication table of 1-n
 *
 * @n : size of times table
 */
void print_times_table(int n)
{
	int table, num, mult;

	if (n <= 15 && n >= 0)
	{
		for (table = 0; table <= n; table++)
		{
			for (num = 0; num <= n; num++)
			{
				mult = table * num;
				if (mult < 10 && num != 0)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(32);
					_putchar(mult + '0');
				}
				else if (num == 0)
					_putchar('0');
				else if (mult <= 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar((mult / 10) + '0');
					_putchar((mult % 10) + '0');
				}
				else if (mult < 1000)
				{
					_putchar(',');
					_putchar(32);
					_putchar((mult / 100) + '0');
					_putchar(((mult / 10) % 10) + '0');
					_putchar((mult % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
