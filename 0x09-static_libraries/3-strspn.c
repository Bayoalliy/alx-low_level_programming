#include <stdio.h>
#include <string.h>
/**
 * _strspn - search for a character in a string.
 * @s : The string to be searched
 * @accept : substring
 * Return: number of bytes in the initial segment of s
 */
char *_strspn(char *s, char *accept)
{
	long len = strspn(s, accept);

	return ((char *) len);
}
