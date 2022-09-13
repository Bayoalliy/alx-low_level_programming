#include <unistd.h>
#include "main.h"
#include <ctype.h>

/**
 * print_sign- check if parameter c is positive , negative or zero
 *
 * Return: On success 1
 *
 * @n: is an integer
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(45);
		return (-1);
	}

}

