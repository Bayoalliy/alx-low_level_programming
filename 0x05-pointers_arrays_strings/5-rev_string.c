#include <stdio.h>
#include "main.h"
/**
 * rev_string - prints the reverse of a string
 *
 * @s : pointer to char.
 */
void rev_string(char *s)
{
	int i = 0, count = 0;

	char tmp, *rev;



	while (s[count] != '\0')
		count++;

	rev = s + count - 1;

	for (i = 0; i < count / 2; i++)
	{
		tmp = s[i];
		s[i] = *(rev - i);
		*(rev - i) = tmp;
	}

}
