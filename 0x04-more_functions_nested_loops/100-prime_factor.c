
#include <stdio.h>

/**
 * main - prints the biggest prime factor
 *
 * Return: Always 0 (success)
 */


int main(void)
{

	long int num = 612852475143;

	long int i;

	for (i = 2; i <= num; i++)
	{
		while (num % i == 0)
		{
			num = num / i;
			i--;
		}
	}

	printf("%ld\n", i);
	return (0);

}
