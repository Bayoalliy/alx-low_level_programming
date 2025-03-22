#include "main.h"
#include <stdio.h>

/**
 * string_toupper - convert a string to upperCase.
 *
 * @s : pointer to the string.
 *
 * Return: pointer to the string..
 */

char *string_toupper(char *s)
{
	char *ptr = s;

	while (*s)
	{
		if (*s > 96 && *s < 123)
		{
			*s = (char)(*s - 32);
		}
		s++;
	}
	return (ptr);
}
