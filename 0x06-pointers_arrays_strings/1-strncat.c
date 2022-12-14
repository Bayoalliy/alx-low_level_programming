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
	int i, j;

	for (j = 0; src[j] != '\0'; j++)
		;

	if (n > j)
		n = j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; j < n; j++, i++)
		dest[i] = src[j];

	return (dest);
}
