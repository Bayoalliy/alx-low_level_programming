#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at a given index.
 * @head: pointer to the head node.
 * @index: index of the node.
 * Return: 1 (if success), -1 (if fail).
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *itr = *head;

	while (itr)
	{
		if (index == 0)
		{
			if (itr->prev)
				(itr->prev)->next = itr->next;
			else
				*head = itr->next;
			if (itr->next)
				(itr->next)->prev = itr->prev;
			return (1);
		}

		index--;
		itr = itr->next;
	}
	return (-1);
}
