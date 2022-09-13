#include <stdio.h>
#include "main.h"

/**
 *
 * main - checks the code
 *
 * Return: On success 1.
 *
 */

int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);

	return 0;
}
