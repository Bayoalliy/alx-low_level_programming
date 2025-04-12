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
		if (format[i] != 'c' && format[i] != 'i'
		&& format[i] != 'f' && format[i] != 's')
			continue;
		if (!is_first)
			printf(", ");
		is_first = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				val = va_arg(args, char *
);
				switch (*val)
				{
					case '\0':
						printf("(nil)");
						break;
					default:
						printf("%s", val);
				}
				break;
		}

	}
	printf("\n");
}
