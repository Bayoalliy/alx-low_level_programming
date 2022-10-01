#include <unistd.h>
#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks if a letter is a digit
 *
 * @c : parameter
 *
 * Return: On success 1.
 *
 */

int _isdigit(int c)
{
	if (isdigit(c) != 0)
		return (1);
	else
		return (0);
}
