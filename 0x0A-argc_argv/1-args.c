#include <stdio.h>
#include <string.h>
/**
 * main - Entry point.
 * @argc : argument count
 * @argv : argument vector
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 0, sum = 0;

	if (argc > 1)
	{
		while (argv[i] != argv[argc - 1])
		{
			sum += 1;
			i++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
