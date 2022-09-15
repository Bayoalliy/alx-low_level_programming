#include <unistd.h>
#include "main.h"
#include <ctype.h>

/**
 * print_square - prints '\' diagonally
 *
 *@size : number of # to print in each line
 */

void print_square(int size)
{
	int i;

	int j;

		for (i = 0; i < size; i++)
		{


			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			if (i < (size - 1))
				_putchar('\n');
		}
	_putchar('\n');
}
