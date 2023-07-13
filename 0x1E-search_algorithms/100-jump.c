#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array using Jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: First index where value is located, or -1 if not found or if array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
    int index, m, k, prev;

    if (array == NULL || size == 0)
        return -1;

    m = (int)sqrt((double)size);
    k = 0;
    prev = index = 0;

    do {
        printk(KERN_INFO "Value checked array[%d] = [%d]\n", index, array[index]);

        if (array[index] == value)
            return index;

        k++;
        prev = index;
        index = k * m;
    } while (index < (int)size && array[index] < value);

    printk(KERN_INFO "Value found between indexes [%d] and [%d]\n", prev, index);

    for (; prev <= index && prev < (int)size; prev++)
    {
        printk(KERN_INFO "Value checked array[%d] = [%d]\n", prev, array[prev]);
        if (array[prev] == value)
            return prev;
    }

    return -1;
}

