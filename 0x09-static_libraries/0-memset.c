#include <stdio.h>
#include <string.h>
/**
 * _memset - fills memory with a constant byte.
 * @s : poniter to memory space to be filled
 * @b : character s will be filled with
 * @n : number of bytes of space b will fill
 * Return: memory updated with new value(success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
