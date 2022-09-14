#include <unistd.h>
#include "main.h"

/**
 * jack_bauer - prints all minutes in a day
 *
 * Return: On success 1.
 */

void jack_bauer(void)
{
	int hrs;

	int min;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (min = 0; min < 60; min++)
		{
			if (hrs < 10)
			{
				_putchar('0');
				_putchar((hrs % 10) + '0');
				_putchar(':');
			}
			else
			{
				_putchar((hrs / 10) + '0');
				_putchar((hrs % 10) + '0');
				_putchar(':');
			}
			if (min < 10)
			{
				_putchar('0');
				_putchar((min % 10) + '0');
				_putchar('\n');
			}
			else
			{
				_putchar((min / 10) + '0');
				_putchar((min % 10) + '0');
				_putchar('\n');
			}
		}
	}
}
