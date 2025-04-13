#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 *
 * @format: formats of each argument to be printed.
 *
 */

void print_all(const char * const format, ...)
{
	int i = -1, is_first = 1;
	va_list args;
	char *val;

	va_start(args, format);
	while (format && format[++i])
	{
		if ((format[i] == 'c' || format[i] == 'i'
		|| format[i] == 'f' || format[i] == 's') && !is_first)
			printf(", ");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int)), is_first = 0;
				break;
			case 'i':
				printf("%i", va_arg(args, int)), is_first = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), is_first = 0;
				break;
			case 's':
				val = va_arg(args, char *), is_first = 0;
				if (!val)
				{
					printf("(nil)");
					break;
				}
				printf("%s", val);
				break;
		}

	}
	printf("\n");
}
