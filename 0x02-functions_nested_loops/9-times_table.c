
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

			if (mult < 10)
			{
				_putchar(mult + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
