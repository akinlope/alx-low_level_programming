#include "lists.h"

/**
 * sum_listint - sum all the data
 * @head: first argument
 * Return: head
*/

int sum_listint(listint_t *head)
{
    int total;
    total = 0;
    
    while (head != NULL)
    {
        total = total + head->n;
        head = head->next;
    }
     
    return (total);
}