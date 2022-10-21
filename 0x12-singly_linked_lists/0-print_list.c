#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the list
 * @h: arguement passed 
 * Return: node
*/

size_t print_list(const list_t *h)
{
    size_t node = 0;
    while (h)
    {
        if (h->str == NULL){
            printf("[0] (nill)");
        }else{
            printf("[%d] %s\n", h->len, h->str);
        }

        h = h->next;
        node++;
    }
    return (node);
}
