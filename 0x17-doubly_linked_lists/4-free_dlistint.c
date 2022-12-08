#include "lists.h"

/**
 * free_dlistint - free allocated space for linked list.
 * @head: pointer to the head node of the linked list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *f = head;

	while (head)
	{
		head = head->next;
		free(f);
		f = head;
	}
}
