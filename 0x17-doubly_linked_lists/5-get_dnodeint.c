#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: head of list
 * @index:index of node starting from 0
 *
 * Return: address of nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;


	while (count < index)
	{
		if (head == NULL)
			return (NULL);
		count++;
		head  = head->next;
	}
	return (head);
}
