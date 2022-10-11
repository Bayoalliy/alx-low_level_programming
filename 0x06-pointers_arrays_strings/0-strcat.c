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
	int i, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; i++, j++)
		dest[i] = src[j];

	return (dest);
}
