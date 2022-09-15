#include <unistd.h>
#include "main.h"
#include <ctype.h>

/**
 * print_triangle - prints '#' in a triangular pattern
 *
 *@size : number of '#' to print
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = size; j > i + 1; j--)
			_putchar(' ');
		for (k = 0; k <= i; k++)
			_putchar('#');
		if (i != (size - 1))
			_putchar('\n');
	}
	_putchar('\n');

}
