
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * times_table - prints multiplication table of 1-9
 *
 * Return: On success 1
 */
void times_table(void)
{
	int table, num;

	for (table = 0; table <= 9; table++)
	{
		for (num = 0; num <= 9; num++)
		{
			int mult = table * num;

			if (mult < 10 && num != 0)
			{
				_putchar(',');
				_putchar(32);
				_putchar(32);
				_putchar(mult + '0');
			}
			else if(num == 0)
			{
				_putchar('0');
			}

			else if(mult >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
