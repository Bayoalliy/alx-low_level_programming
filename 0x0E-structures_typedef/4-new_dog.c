#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new structure.
 * @name: first member.
 * @age: second member.
 * @owner: third member.
 * Return: pointer to new structure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(dog_t));

	if (new_d == NULL)
		return (NULL);

	new_d->name = name;
	new_d->age = age;
	new_d->owner = owner;

	return (new_d);
}
