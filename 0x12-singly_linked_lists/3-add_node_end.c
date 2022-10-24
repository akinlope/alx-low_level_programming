#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - add nodes to the begining of a list
 * @head: first arguement
 * @str: second arguement
 * Return: return head
*/

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *ptr, *temp;
    int i;

    ptr = malloc(sizeof(list_t));
    if (ptr = NULL)
    {
        return (NULL);
    }

    ptr->str = strdup(str);

    for (i = 0; str[i]; i++)
    ;

    ptr->len = i;
    ptr->next = NULL;
    temp = *head;

    if (temp == NULL)
    {
        *head = ptr;
    }
    else
    {
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = ptr;
    }
    return (*head);
    
}

