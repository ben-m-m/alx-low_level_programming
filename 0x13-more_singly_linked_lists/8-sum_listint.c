#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: variable pointer
 *
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add = add + head->n;
		head = head->next;
	}
	return (add);
}
