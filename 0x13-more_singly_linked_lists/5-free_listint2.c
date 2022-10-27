#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free dynamically allocated memory.
 * @head: pointer to head.
 * Return: none.
 */
void free_listint2(listint_t **head)
{
	if (*head != NULL)
	{
		while ((*head)->next != NULL)
		{
			free(*head);
			*head = (*head)->next;
		}
		free(*head);
	}
}

