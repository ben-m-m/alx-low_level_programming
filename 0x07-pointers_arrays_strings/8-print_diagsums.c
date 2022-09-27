#include <stdio.h>
/**
 * print_diagsums - prints sum of diagonals
 * @a: pointer to 2D array
 * @size: matrix size
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int row, x;

	for (row = 0; row < size; row++)
	{
		x = (row * size) + row;
		sum1 += a[x];
	}

	for (row = 1; row <= size; row++)
	{
		x = (row * size) - row;
		sum2 += a[x];
	}
	printf("%d, %d\n", sum1, sum2);
}
