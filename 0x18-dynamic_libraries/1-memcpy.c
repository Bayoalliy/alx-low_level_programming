#include <stdio.h>
#include <string.h>
/**
 * _memcpy - fills memory with a constant byte.
 * @src : poniter to memory space to be filled
 * @dest : character s will be filled with
 * @n : number of bytes of space b will fill
 * Return: memory updated with new value(success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
