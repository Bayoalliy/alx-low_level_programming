#include <stdio.h>

/**
 * main - Entry point
 * Return : Always 0 (success)
 */
void print_fibonacci_98(void);

int main(void)
{
	print_fibonacci_98();

	return (0);
}

/**
 * print_fibonacci_98 - prints the first 98 fibonacci sequence
 */
void print_fibonacci_98(void)
{
	long int i, third, first = 0, second = 1;

	for (i = 0; i < 50; i++)
	{
		third = first + second;

		printf("%ld", third);
		if (i != (50 - 1))
			printf(", ");
		first = second;
		second = third;
	}
	printf("\n");
}
