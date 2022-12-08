#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - print datas in a linked list.
 * @h: pointer to header node.
 * Return: number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
