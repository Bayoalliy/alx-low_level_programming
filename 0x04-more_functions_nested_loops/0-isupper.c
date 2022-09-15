#include <unistd.h>
#include "main.h"
#include <ctype.h>

/**
 *
 * main - checks the code
 *
 * Return: On success 1.
 *
 */

int _isupper(int c)
{
	if (isupper(c) != 0)
		return 1;
	else
		return 0;
}
