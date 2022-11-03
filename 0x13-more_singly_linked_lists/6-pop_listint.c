#include "lists.h"

/**
 * pop_listint - deletes the head node, returns the head node’s data (n)
 * @head: variable pointer to pointer
 *
 * Return: head nodes data (n) or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *p, *q;
	int tmp;

	if (*head == NULL)
		return (0);

	else
	{
		q = *head;
		p = (*head)->next;
		tmp = (*head)->n;
		free(q);
		*head = p;
	}
	return (tmp);
}
