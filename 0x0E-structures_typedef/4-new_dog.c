#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - creates a new structure.
 * @name: first member.
 * @age: second member.
 * @owner: third member.
 * Return: pointer to new structure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	unsigned int i;

	dog_t *new_d;

	new_d = malloc(sizeof(*new_d));

	if (new_d == NULL || name == NULL || owner == NULL)
	{
		free(new_d);
		return (NULL);
	}
	new_d->name = malloc(strlen(name) + 1);

	new_d->owner = malloc(strlen(owner) + 1);
	if ((new_d->owner) == NULL || (new_d->name) == NULL)
	{
		free(new_d->owner);
		free(new_d->name);
		free(new_d);
		return (NULL);
	}
	for (i = 0; i < strlen(name) + 1; i++)
	{
		new_d->name[i] = name[i];
	}

	for (i = 0; i < strlen(owner) + 1; i++)
		new_d->owner[i] = owner[i];

	new_d->age = age;

	return (new_d);
}
