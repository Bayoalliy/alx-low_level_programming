#include <unistd.h>
#include "main.h"

/**
 *
 * main - checks the code
 *
 * Return: On success 1.
 *
 */

void print_alphabet_x10(void)
{
	int count = 0;

	char ch;
	
	while (count < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');
		count++;
	}

}
