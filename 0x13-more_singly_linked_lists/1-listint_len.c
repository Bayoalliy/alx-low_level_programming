#include <stdio.h>
#include "lists.h"

/**
 * listint_len - count the number of nodes.
 * @h: pointer to list node.
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int sum = 0;

	while (h != NULL)
	{
		h = h->next;

		sum++;
	}
	return (sum);
}

