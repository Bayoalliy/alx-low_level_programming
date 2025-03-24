#include "main.h"
#include <stdio.h>


/**
 * leet - encodes a string into 1337.
 *
 * @str : string to encode
 *
 * Return: pointer to the encoded string.
 */

char *leet(char *str)
{
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\0'};
	char nums[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1', '\0'};
	char *itr = str, *letr, *num;

	while (*itr)
	{
		letr = letters;
		num = nums;

		while (*letr)
		{
			if (*letr == *itr)
			{
				*itr = *num;
			}
			letr++;
			num++;
		}
		itr++;
	}
	return (str);
}
