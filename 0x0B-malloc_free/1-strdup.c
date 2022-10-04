#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy a string.
 * @str : the string to be copied.
 * Return: pointer to the newly allocated memory in space.
 */
char *_strdup(char *str)
{
	char *a;

	unsigned int i;

	if (str == NULL)
		return (NULL);

	a = malloc(sizeof(*str));

	if (a == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		a[i] = str[i];
	return (a);
}


