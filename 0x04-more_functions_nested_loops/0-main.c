#include <unistd.h>
#include "main.h"

/**
 *
 * main - checks the code
 *
 * Return: On success 1.
 *
 */

int main(void)
{
	char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
