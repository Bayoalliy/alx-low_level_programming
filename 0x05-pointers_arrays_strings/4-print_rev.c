#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints the reverse of a string
 *
 * @s : pointer to the variable str
 */
void print_rev(char *s)
{
	int a, count = 0;


	while (s[count] != '\0')
		count++;

	a = count;

	for (a = count - 1; a >= 0; a--)
	{
		putchar(s[a]);
	}
	putchar('\n');
}
