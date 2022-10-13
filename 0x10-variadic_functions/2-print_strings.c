#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print it's arguments(strings).
 * @n: number of argument.
 * @separator: separates the printed strings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *s;

	va_list nums;

	if (n > 0)
	{
		va_start(nums, n);

		for (i = 0; i < n; i++)
		{
			s = va_arg(nums, char *);
			if (!s)
				printf("(nil)");
			else
				printf("%s", s);
			if (separator != NULL && i != n - 1)
				printf("%s", separator);
		}

		va_end(nums);
	}

		printf("\n");
}


