
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * print_last_digit - returns the last digit of an integer
 *
 * Return: On success 1
 *
 * @i: is an integer
 */
int print_last_digit(int i)
{
	int lastdigit = ((abs(i)) % 10);

	if (lastdigit < 0)
	{
		_putchar(-lastdigit + 48);
		return (-lastdigit);
	}
	else
	{
		_putchar(lastdigit + 48);
		return (lastdigit);
	}
}
