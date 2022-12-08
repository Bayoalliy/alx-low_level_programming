#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a linked list.
 * @head: pointer to the head node.
 * @index: index of the node.
 * Return: pointer to nth node. NULL if unsuccessful.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *itr = head;

	while (itr)
	{
		if (index == 0)
			return (itr);
		index--;
		itr = itr->next;
	}
	return (NULL);
}
