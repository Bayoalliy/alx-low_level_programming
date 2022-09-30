#include <stdio.h>

/**
 * main - Entry point.
 * @argc : argument count
 * @argv : argument vector
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
