#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *infinite_add - adds two numbers(string format).
 *
 * @n1: first number.
 *
 * @n2: second number.
 *
 * @r: buffer that the function will use to store the result.
 *
 * @size_r: size of r.
 *
 * Return: Always 0.
 */


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *long_str, *short_str;
	int len_l, len_s, carried = 0, res = 0, s = size_r, i;

	if (strlen(n1) >= strlen(n2))
		long_str = n1, short_str = n2;
	else
		long_str = n2, short_str = n1;
	if ((size_t)size_r < strlen(long_str) + 1)
		return (0);

	len_l = strlen(long_str);
	len_s = strlen(short_str) - 1;

	for (i = len_l; i > 0; i--)
	{
		res = (long_str[i - 1] - 48) + carried;
		if (len_s > -1)
			res += (short_str[len_s] - 48);
		if (res > 9)
			r[s - 2] = (res % 10) + 48, carried = res / 10;
		else
			r[s - 2] = (res + 48), carried = 0;
		len_s--, s--;
	}
	if (carried)
	{
		if ((int)size_r < (len_l + 2))
			return (0);
		r[s - 2] = (carried + 48);
	}
	r[size_r - 1] = '\0';

	if (!*r)
	{
		while (!*r)
			r++;
	}
	return (r);
}




