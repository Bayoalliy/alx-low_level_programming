#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 *
 * main - checks the code
 *
 * Return: On success 1.
 *
 */

int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return 0;
}
