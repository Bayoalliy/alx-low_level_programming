#include <stdio.h>

/**
 * main - Entry point
 * Return : Always 0 (success)
 */
void print_fibonacci_sum(void);

int main(void)
{
	print_fibonacci_sum();

	return (0);
}

/**
 * print_fibonacci_sum - print the sum of even fibonacci sequence below 4x10^6.
 */
void print_fibonacci_sum(void)
{
	long int i, third, first = 0, second = 1;

	int sum = 0;

	for (i = 0; i < 50; i++)
	{
		third = first + second;

		first = second;
		second = third;

		if (third <= 4000000)
		{
			if (third % 2 == 0)
				sum += third;
		}
	}
	printf("%d\n", sum);
}
