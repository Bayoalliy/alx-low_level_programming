#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13.
 *
 * @str : pointer to the string to be encoded.
 *
 * Return: encoded/decoded string.
 */


char *rot13(char *str)
{
	char *alf = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *itr = str, *letter, *rot13;

	while (*itr)
	{
		letter = alf;
		rot13 = rot;

		while (*letter)
		{
			if (*itr == *letter)
			{
				*itr = *rot13;
				break;
			}
			letter++;
			rot13++;
		}
		itr++;
	}
	return (str);
}
