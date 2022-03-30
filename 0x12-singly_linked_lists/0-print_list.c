#include "lists.h"

size_t print_list(const list_t *h)
{
    unsigned int count = 0;

    list_t *ptr = NULL;

    ptr = h;

    if (ptr->str == NULL)
    {
        printf("[0] (nil)");
    }

    while (ptr != NULL)
    {
        printf("[%d] %s\n",ptr->len, ptr->str);
        count ++;
        ptr = ptr->next;
    }

    return count;
}