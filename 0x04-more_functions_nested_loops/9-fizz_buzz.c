#include <unistd.h>
#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * fizzbuzz - checks if a number is a muntiple of 5
 *
 *
 * Return: On success 1.
 *
 */

void fizzbuzz(void)
{
	int i;

	i = 1;
	printf("%d", i);


	for (i = 2; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf(" FizzBuzz");

		else if (i % 5 == 0)
			printf(" Buzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else
			printf(" %d", i);
	}
	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	fizzbuzz();
	return (0);
}
