#include "lists.h"

/**
 * add_nodeint - add node to the begining
 * @head: first arguement
 * @n: second arguement
 * Return: return node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr_new_node;

	ptr_new_node = malloc(sizeof(listint_t));

	if (ptr_new_node == NULL)
		return (NULL);

	ptr_new_node->n = n;
	ptr_new_node->next = *head;
	*head = ptr_new_node;
	return (*head);
}

