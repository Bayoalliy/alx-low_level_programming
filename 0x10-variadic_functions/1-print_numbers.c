#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print it's arguments(integers).
 * @n: number of argument.
 * @separator: separates the printed numbers.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list nums;

	if (n > 0)
	{
		va_start(nums, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(nums, int));
			if (separator != NULL && i != n - 1)
				printf("%s", separator);
		}

		va_end(nums);
	}

		printf("\n");
}


