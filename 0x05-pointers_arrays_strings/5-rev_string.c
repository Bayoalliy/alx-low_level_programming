#include <stdio.h>
#include "main.h"
/**
 * rev_string - prints the reverse of a string
 *
 * @s : pointer to the variable str
 */
void rev_string(char *s)
{
	int a, count = 0;


	while (*(s + count) != '\0')
		count++;

	a = count;

	for (a = count - 1; a >= 0; a--)
	{
		putchar(*(s + a));
	}
	putchar('\n');
}
