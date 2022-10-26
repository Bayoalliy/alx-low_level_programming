#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add an element at the beginning of a list.
 * @head: pointer to head.
 * @n: content of the list elements.
 * Return: pointer to the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free (new);
		return (NULL);
	}

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
