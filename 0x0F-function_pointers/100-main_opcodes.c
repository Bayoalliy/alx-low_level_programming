#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * main - prints the opcodes of its self.
 *
 * @argc: number of argumentd.
 *
 * @argv: argument vector.
 *
 * Return: 0 if success.
 */

int main(int argc, char **argv)
{
	int i;
	char *tmp = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < atoi(argv[1]); i++)
	{
		printf("%02x", tmp[i] & 255);
		if (i < (atoi(argv[1]) - 1))
			printf(" ");
	}
	printf("\n");
	return (0);
}
