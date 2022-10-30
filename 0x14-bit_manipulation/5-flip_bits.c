#include <stdio.h>
/**
 * flip_bits - calculate number of bits to be flipped to convert n to m.
 * @n: integer to be converted.
 * @m: integer n will be converted to.
 * Return: number of bits flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits_flips = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			bits_flips += 1;
		n >>= 1;
		m >>= 1;
	}
	return (bits_flips);
}
