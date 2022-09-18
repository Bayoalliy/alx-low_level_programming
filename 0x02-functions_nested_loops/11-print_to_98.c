#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers
 * greater - print from numbers bigger than 98
 *
 * lesser - print from numb * @n: starting point of count
 *
 * print_to_98 - main function
 *
 **/
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{

		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d",i);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
	}
}
