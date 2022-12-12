#include <stdio.h>
#include <string.h>
/**
 * _strstr - find a string in another string
 * @haystack : The string to be searched
 * @needle : string we are searching for
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
