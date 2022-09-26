#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - matches charactrrs in a string to another string
 * @s : The string to be searched
 * @accept : matching string
 * Return: pointer to the characters that match with accept
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
