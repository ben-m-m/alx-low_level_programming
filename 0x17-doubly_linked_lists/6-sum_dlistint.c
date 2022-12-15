#include "lists.h"
/**
 * sum_dlistint -  returns the sum of all the data (n) of a doubly linked list
 * @head: ptr to header of list
 *
 * Return: sum of all data (n)
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
