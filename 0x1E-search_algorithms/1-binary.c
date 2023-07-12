#include "search_algos.h"

/**
 * recursive_search - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
	{
		if (i == 0)
			printf(": ");
		else
			printf(", ");
		printf("%d", array[i]);
	}

	printf("\n");

	if (mid && size % 2 == 0)
		mid--;

	if (value == array[mid])
		return ((int)mid);

	if (value < array[mid])
		return (recursive_search(array, mid, value));

	mid++;

	return (recursive_search(array + mid, size - mid, value) + mid);
}

/**
 * binary_search - function to search value
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to be searched
 * Return: value if or and -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int pos;

	pos = recursive_search(array, size, value);

	if (pos >= 0 && array[pos] != value)
		return (-1);

	return (pos);
}
