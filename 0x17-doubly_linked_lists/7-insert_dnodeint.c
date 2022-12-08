#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at a given index.
 * @h: pointer to the head node.
 * @idx: index of the node.
 * @n: data(int) of the node.
 * Return: pointer to the inserted node. NULL if unsuccessful.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *itr = *h;

	dlistint_t *new;
/*
	if (idx == 0)
		return (add_dnodeint(h, n));
*/
	while (itr)
	{
		if (idx == 0)
		{
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);

			new->n = n;
			new->next = itr;
			new->prev = itr->prev;
			(itr->prev)->next = new;
			itr->prev = new;
			return (new);
		}

		idx--;
		itr = itr->next;
	}
	return (NULL);
}
