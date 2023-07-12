#include "search_algos.h"

/**
 * linear_search - a function to search the elements of an array linearly
 * @array: array to search the element from
 * @size: the size of the array
 * @value: value to search
 * Return: -1 if element not in array else the position of the element in the
 * array
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
