#include "search_algos.h"

/**
 * binary_search - function to search value
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to be searched
 * Return: value if or and -1 if not found
 */


int binary_search(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t i;

	for (i = 0; i < size; i++)
	{
	printf("Searching in array: %d\n", array[i]);
	if (array[mid] == value)
		return (mid);

	if (array[mid] > value)
	{
		size_t j;

		for (j = mid; j < size; j++)
		{
			printf("Searching in array: %d\n", array[j]);
		}
	return (binary_search(array, mid - 1, value));
		}
	else
	{
		size_t k;

		for (k = mid; k > size; k--)
		{
			printf("Searching in array: %d\n", array[k]);
		return (binary_search(array, mid + 1, value));
	}
}
}
return (-1);
}
