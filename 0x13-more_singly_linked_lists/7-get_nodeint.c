#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: variable pointer
 * @index: int
 *
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int x = 0;

	if (head != NULL)
	{
		tmp = head;

		while (tmp != NULL)
		{
			if (x == index)
				return (tmp);

			tmp = tmp->next;
			x++;
		}
	}
	return (NULL);
}
