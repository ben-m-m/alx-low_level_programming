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
	listint_t *new, *t;

	new =  malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	t = *head;
	if (t == NULL)
		*head = new;
	else
	{
		while (t->next != NULL)
			t = t->next;
			t->next = new;
	}
	return (new);


}
