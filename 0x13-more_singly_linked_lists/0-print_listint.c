#include <stdio.h>
#include "lists.h"

/**
 * print_list - print elements in a list nodes.
 * @h: pointer to list node.
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int sum = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;

		sum++;
	}
	return (sum);
}

