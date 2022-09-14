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
	print_to_98(0);
	print_to_98(98);
	print_to_98(111);
	print_to_98(81);
	print_to_98(-10);

	return 0;
}
