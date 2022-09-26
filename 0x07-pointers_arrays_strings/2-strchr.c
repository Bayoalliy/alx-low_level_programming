#include <stdio.h>
#include <string.h>
/**
 * _strchr - search for a character in a string.
 * @s : The string to be searched
 * @c : character to search for
 * Return: pointer to the first occurrence of c
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
