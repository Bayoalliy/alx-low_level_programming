#include <unistd.h>
#include "main.h"
#include <ctype.h>

/**
 * print_line - prints numbers from 0 - 9 except 2 and 4
 *
 *@n : number of _ to print
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
			_putchar(95);
	}
	_putchar('\n');
}
