#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - add nodes to the begining of a list
 * @head: first arguement
 * @str: second arguement
 * Return: return head
*/

list_t *add_node(list_t **head, const char *str)
{
    list_t *ptr;
    int i;

    ptr = malloc(sizeof(list_t));
    if(ptr == NULL){
        return (NULL);
    }

    ptr->str = strdup(str);

    for(i = 0; str[i]; i++);

    ptr->len = i;
    ptr->next = *head;
    *head = ptr;


    return (*head);
}