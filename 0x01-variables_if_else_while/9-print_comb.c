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
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		if (ch != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
