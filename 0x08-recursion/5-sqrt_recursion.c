#include "main.h"
#include <string.h>
/**
 * _pow_recursions - calculates square root.
 * @x : integer
 * @y : square root
 * Return: square root
 */

int _pow_recursions(int x, int y)
{
	if (y % (x / y) == 0)
	{
		if (y * (x / y) == x)
			return (y);
		else
			return (-1);
	}
	return (_pow_recursions(x, y + 1));
}

/**
 * _sqrt_recursion - checks if input is > 0
 * @n : input
 * Return: -1,0,or square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	else
		return (_pow_recursions(n, 2));

}
