#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers
 * greater - print from numbers bigger than 98
 *
 * lesser - print from numbers lesser than 98.
 *
 * @n: starting point of count
 *
 * print_to_98 - main function
 *
 **/
void greater(int n)
{
	if (n > 98)
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			if (i >= 100)
			{
				int last = i % 100;

				int mid = last / 10;

				_putchar((i / 100) + '0');
				_putchar(mid + '0');
				_putchar((i % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				if (i != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}

void lesser(int n)
{
		int i;

		for (i = n; i <= 98; i++)
			if (i < 10)
			{
				if (i < 0)
				{
					if (i < -9)
					{
						_putchar('-');
						_putchar((abs(i) / 10) + '0');
						_putchar((abs(i) % 10) + '0');
					}
					else
					{
						_putchar('-');
						_putchar(abs(i) + '0');
					}
				}
				else
				{
					_putchar(i + '0');
				}
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				if (i != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		_putchar('\n');

}


void print_to_98(int n)
{
	if (n > 98)
		greater(n);
	else if (n < 98)
		lesser(n);
	else if (n == 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar('\n');
	}
}
