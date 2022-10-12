#include <stdio.h>
/**
 * print_name - calls a function indirectly.
 * @name: parameter one.
 * @f: function to be called.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
