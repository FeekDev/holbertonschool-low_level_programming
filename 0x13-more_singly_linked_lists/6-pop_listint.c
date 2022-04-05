#include "lists.h"

int pop_listint(listint_t **head)
{
    listint_t *temp = head /* creating a temporary pointer to head*/
    int i;

    if (*head == 0)
    {
        printf("\nElement deleted is : %d\n",temp->n);
        *head = (*head)->next; /* traversal*/
        temp->next = NULL;
        free(temp);
    }
}