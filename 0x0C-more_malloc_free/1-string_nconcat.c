#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenate first nth elements if s2 to s1.
 * @s1 : first string.
 * @s2 : second string.
 * @n : number of first elements of s2.
 * Return: pointer to the adress of concatenated string..
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;

	unsigned int i, j;

	a = malloc((strlen(s1) + strlen(s2)) + 1);
	if (a == NULL)
		return (NULL);
	if (n >= (strlen(s2) + 1))
		n = strlen(s2) + 1;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		a[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		a[i] = s2[j];
		i++;
	}
	return (a);

}
