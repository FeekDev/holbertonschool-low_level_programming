#include "lists.h"

/**
 * add_node_end - the function
 * @head: the param pointer
 * @str: the param dat char
 * Return: the new nodo
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	list_t *last = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new_node;
	return (new_node);
}
