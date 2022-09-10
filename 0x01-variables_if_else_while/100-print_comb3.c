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
	int ch, i;

	for (ch = 0; ch <= 9; ch++)
	{
		for (i = 1; i <= 9; i++)
		{
			if (i > ch)
			{
				putchar(ch + '0');
				putchar(i + '0');
				if (ch != 8)
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
