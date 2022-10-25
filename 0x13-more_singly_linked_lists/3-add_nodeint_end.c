#include "lists.h"

/**
 * add_nodeint_end - add node to the end
 * @head: first argument
 * @n: second argument
 * Return: return head
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr_end;
	listint_t *temp;

	ptr_end = malloc(sizeof(listint_t));

	if (ptr_end == NULL)
		return (NULL);

	ptr_end->n = n;
	ptr_end->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
		*head = ptr_end;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = ptr_end;
	}
	return (*head);
}

