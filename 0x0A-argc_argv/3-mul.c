#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point.
 * @argc : argument count
 * @argv : argument vector
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[argc - 2]) * atoi(argv[argc - 1]));

	return (0);
}
