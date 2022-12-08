#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of a linked list.
 * @n: data to be stored in the created node.
 * @head: pointer to pointer to the head node.
 * Return: pointer to new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	dlistint_t *current = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (current->next)
		{
			current = current->next;
		}
		current->next = new;
		new->prev = current;
	}

	return (new);
}
