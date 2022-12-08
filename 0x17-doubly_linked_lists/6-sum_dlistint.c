#include "lists.h"

/**
 * sum_dlistint - calculate the sum of ints in a linked list
 * @head: pointer to head node.
 * Return: sum of integers in the list.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	dlistint_t *itr = head;

	while (itr)
	{
		sum += itr->n;
		itr = itr->next;
	}
	return (sum);
}
