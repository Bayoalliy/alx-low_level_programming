#include <unistd.h>
#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks if a letter is in uppercase
 *
 * @c : parameter
 *
 * Return: On success 1.
 *
 */

int _isupper(int c)
{
	if (isupper(c) != 0)
		return (1);
	else
		return (0);
}
