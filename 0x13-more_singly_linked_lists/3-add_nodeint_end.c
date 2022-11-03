#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of listint_t
 * @head: pointer to pointer of type listint_t
 * @n: const parameter of type int
 *
 * Return: address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp = *head;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = node;
	return (*head);
}
