#include <unistd.h>
#include "main.h"
#include <ctype.h>

/**
 * _islower - check if parameter c is in lowercase
 *
 * Return: On success 1
 *
 * @c: is a character
 */
int _islower(int c)
{
	if (islower(c) != 0)
		return (1);
	else
		return (0);
}
