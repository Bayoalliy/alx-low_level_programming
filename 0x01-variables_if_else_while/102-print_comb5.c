#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int k, l;

	for (k = 0; k <= 99; k++)
	{
		for (l = 1; l <= 99; l++)
		{
			if (l > k)
			{
				putchar((k / 10) + '0');
				putchar((k % 10) + '0');
				putchar(' ');
				putchar((l / 10) + '0');
				putchar((l % 10) + '0');
				if (k != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
