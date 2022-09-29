#include "main.h"
#include <string.h>
/**
 * _isprime - checks if a number is prime.
 * @x : integer
 * @y : possible factor of x
 * Return: 1
 */

int _isprime(int x, int y)
{
	if ((x % y) == 0)
	{
		if (y == x)
			return (1);
		else
			return (0);
	}
	return (_isprime(x, y + 1));
}

/**
 * is_prime_number - checks if n is greater than 1
 * @n : input
 * Return: _isprime.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (_isprime(n, 2));

}
