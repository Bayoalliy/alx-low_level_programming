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
	listint_t *tmp;

	if (*head != NULL)
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			free(tmp);
			tmp = tmp->next;
		}
		free(tmp);
		*head = NULL;
	}
	else
		free(*head);
}

