
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch[] = {95, 112, 117, 116, 99, 104, 97, 114};

	int i;

	for (i = 0; i < 8; i++)
		_putchar(ch[i]);
	_putchar('\n');

	return (0);
}
