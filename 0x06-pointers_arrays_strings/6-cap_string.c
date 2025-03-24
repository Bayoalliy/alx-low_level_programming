#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string.
 *
 * @str : string to be capitalized.
 *
 * Return: pointer to the string.
 */

char *cap_string(char *str)
{
	char sep[] = ",;.!?(){}\n\t \"";
	int begin = 1;
	char *s = str, *itr;

	while (*s)
	{
		if (begin && *s > 96 && *s < 123)
		{
			*s = (char)(*s - 32);
			begin = 0;
			continue;
		}
		else
		{
			begin = 0;
		}
		itr = sep;
		while (*itr)
		{
			if (*s == *itr)
			{
				begin = 1;
			}
			itr++;
		}
		s++;
	}
	return (str);
}
