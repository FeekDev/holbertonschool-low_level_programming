#include "lists.h"

/**
 * add_node - is the function
 * @head: the pointer
 * @str: the parametr data
 * Return: list_t*
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}

