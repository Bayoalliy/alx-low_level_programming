#include <stdio.h>
#include <string.h>
/**
 * _strcat - concatenate two strings
 * @dest : pointer to the string that src will be appended to
 * @src : string to be appended
 * Return: pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
