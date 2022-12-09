#include "lists.h"

/**
 * add_node_end - add a new node at the end of a singly linked list.
 * @head: pointer to pointer to the head node.
 * @str: data to be stored in the node.
 * Return: pointer to the new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	list_t *current;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);



	current = *head;
	new->str = strdup(str);
	new->len = strlen(str);


	if (*head == NULL)
		*head = new;
	else
	{
		while (current->next)
			current = current->next;
		current->next = new;
	}
	new->next = NULL;
	return (new);
}
