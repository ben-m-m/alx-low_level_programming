#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a doubly linked list
 * @head: ptr to header
 * @index: index, starting from 0
 *
 * Return: 1 for success or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	dlistint_t *temp;
	unsigned int pos;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	current = *head;
	pos = 0;
	if (index == 0)
	{
		*head = (*head)->next;
	}
	else
	{
		while (pos < (index - 1))
		{
			if (current == NULL)
				return (-1);
			current = current->next;
			pos++;
		}
		temp = current;
		current = current->next;
		temp->next = current == NULL ? NULL : current->next;
	}
	free(current);
	return (1);
}
