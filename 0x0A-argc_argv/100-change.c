#include <stdio.h>
#include <stdlib.h>
/**
 * change - converts money to coins
 * @m : money to be converted.
 */
void change(int m)
{
	int coins = 0;

	if (m >= 25)
	{
		coins += (m / 25);
		m = (m % 25);
	}
	if (m >= 10)
	{
		coins += (m / 10);
		m = (m % 10);
	}
	if (m >= 5)
	{
		coins += (m / 5);
		m = (m % 5);
	}
	if (m >= 2)
	{
		coins += (m / 2);
		m = (m % 2);
	}
	if (m == 1)
	{
		coins += 1;
	}
	printf("%d\n", coins);
}

/**
 * main - Entry point.
 * @argc : argument count
 * @argv : argument vector.
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[argc - 1]) < 0)
		printf("0\n");
	else
	{
		int c = atoi(argv[argc - 1]);

		change(c);
	}
	return (0);
}
