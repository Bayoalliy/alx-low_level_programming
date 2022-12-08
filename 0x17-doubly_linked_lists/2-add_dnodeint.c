#include "lists.h"

/**
 * add_dnodeint - add a node at the beginnig of a linked list.
 * @n: data to be stored in the created node.
 * @head: pointer to pointer to the head node.
 * Return: pointer to head node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (*head);
}
