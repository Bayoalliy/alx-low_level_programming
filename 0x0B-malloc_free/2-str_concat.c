#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings.
 * @s1 : first string.
 * @s2 : second string.
 * Return: pointer to array of concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *a;

	unsigned int i, j;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	a = malloc((strlen(s1) + strlen(s2)) + 1);

	if (a == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		a[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		a[i] = s2[j];
		i++;
	}
	return (a);
}


