#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints the reverse of a string
 *
 * @s : pointer to the variable str
 */
void rev_string(char *s)
{
	int a, i = 0, count = 0;

	char *rev = s;


	while (s[count] != '\0')
		count++;


	for (a = count - 1; a >= 0; a--)
	{
		rev[i] = s[a];
		i++;
	}

	rev[a] = '\0';
}
