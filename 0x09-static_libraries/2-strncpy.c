#include <stdio.h>
#include <string.h>
/**
 * _strncpy - copy one string into another
 * @dest : pointer to the string that src will be copied into
 * @src : string to be copied
 * Return: pointer to resulting string dest
 * @n : number of bytes to be copied to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
