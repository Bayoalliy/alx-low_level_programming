#include "lists.h"

/**
 * dlistint_len - calculate the length of a linked list
 * @h: pointer to head node.
 * Return: number of elements in a linked list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int elem = 0;

	while (h)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}
