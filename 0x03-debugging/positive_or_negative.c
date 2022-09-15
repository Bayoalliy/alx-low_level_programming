#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
void positive_or_negative(int i)
{
	/* your code goes there */
	if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
