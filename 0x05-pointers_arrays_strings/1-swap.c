#include "main.h"
/**
 * swap_int - swaps values of two ints
 * @a: int parameter 1
 * @b: int parameter 2
 * Return: Always (0)
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
