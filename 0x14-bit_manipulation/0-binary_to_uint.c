#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * binary_to_uint - convert binary to decimal.
 * @b: pointer to binary numbers.
 * Return: decimal value.
 */


unsigned int binary_to_uint(const char *b)
{

	int i, sum = 0, weight = 1, binary;

	char const *tmp = b;

	if (b == NULL)
		return (0);
	while (*tmp != '\0')
	{
		if (*tmp != '0' && *tmp != '1')
			return (0);
		tmp++;
	}
	tmp--;
	for (i = strlen(b); i > 0; i--, weight *= 2)
	{
		binary = *tmp & 1;
		sum += weight * binary;

		tmp--;
	}
	return (sum);
}





