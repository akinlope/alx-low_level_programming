#include <stdio.h>
#include "lists.h"

/**
 * list_len - return all the elements linked 
 * @h: arguement passed in
 * Return: element
*/

size_t list_len(const list_t *h)
{
    size_t i;

    while (h)
    {
        i++;
        h = h->next;
    }
    return (i);
}