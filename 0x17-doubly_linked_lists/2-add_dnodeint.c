#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    /* allocat memory and structure*/
    dlistint_t *new_node = new_node;
    new_node = malloc(sizeof(dlistint_t));
    /* assing data to newNode*/
    new_node->n = n;
    /*point next of newNode to the first node of double linked list*/
    new_node->next = (*head);
    /* point prev to null*/
    new_node->prev = NULL;
    /* point previous of the first node (now first node is second node)*/
    if ((*head) != NULL)
    new_node->prev = new_node;
    /* head points to newNode*/
    (*head) = new_node;

    return 0;
}