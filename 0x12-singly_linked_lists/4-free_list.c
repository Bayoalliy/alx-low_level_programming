#include "lists.h"

/**
 * free_list - free spaces allocater to a li ked list.
 * @head: pointer to head node if the linked list.
 */
void free_list(list_t *head)
{
	list_t *current = head;

	while (head)
	{
		head = head->next;
		free(current);
		current = head;
	}
}
