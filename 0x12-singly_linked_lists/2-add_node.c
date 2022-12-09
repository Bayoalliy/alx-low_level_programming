#include "lists.h"

/**
 * add_node - add a new node at the beginning of a singly linked list.
 * @head: pointer to pointer to the head node.
 * @str: data to be stored in the node.
 * Return: pointer to the new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	list_t *tmp;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	tmp = *head;
	*head = new;
	new->next = tmp;
	new->str = strdup(str);
	new->len = strlen(str);
	return (new);
}
