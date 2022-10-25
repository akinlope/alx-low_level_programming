#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - function that return the no of elements
 * @h: first argument
 * Return: return elem
*/

size_t listint_len(const listint_t *h)
{
    size_t elem = 0;
    

    while (h != NULL)
    {
        h = h->next;
        elem++;
    }

    return (elem);
}