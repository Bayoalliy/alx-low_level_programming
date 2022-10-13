#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sum variable number of integers.
 * @n: number of argument.
 * Return: sum of arguments.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list nums;

	if (n == 0)
		return (0);


	va_start(nums, n);

	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);
	return (sum);
}


