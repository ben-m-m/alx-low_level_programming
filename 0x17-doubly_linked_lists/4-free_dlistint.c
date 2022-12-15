#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: ptr to list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	head = NULL;
}
