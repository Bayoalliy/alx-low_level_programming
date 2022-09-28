#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - return length of a string
 * @s : the string to be counted.
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
