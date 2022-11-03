#include "lists.h"

/**
 * free_listint2 - frees list and sets head to NULL
 * @head: pointer to pointer variable
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	temp = *head;

	while (temp)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
