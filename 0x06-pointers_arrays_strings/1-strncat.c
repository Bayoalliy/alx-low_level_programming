#include <stdio.h>
#include <string.h>
/**
 * _strncat - concatenate two strings
 * @dest : pointer to the string that src will be appended to
 * @src : string to be appended
 * Return: pointer to resulting string dest
 * @n : number of bytes to append to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
