#include <stdio.h>
/**
 * flip_bits - calculate number of bits to be flipped to convert n to m.
 * @n: integer to be converted.
 * @m: integer n will be converted to.
 * Return: number of bits flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 1;

	int sum = 0;

	for (; i <= n; i <<= 1)
	{
		if (((n & i) && !(m & i)) || (!(n & i) && (m & i)))
			sum += 1;
	}
	return (sum);
}
