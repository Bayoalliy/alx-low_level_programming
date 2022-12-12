#include <unistd.h>
#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check if parameter c is an alphabet
 *
 * Return: On success 1
 *
 * @c: is a character
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);
	else
		return (0);
}
