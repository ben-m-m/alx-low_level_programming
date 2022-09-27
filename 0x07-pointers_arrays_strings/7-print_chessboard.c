#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints chessboard
 * @a: two dimensional array
 * Return: (0)
 */

void print_chessboard(char (*a)[8])
{
	int row, column;

	row = column = 0;

	while (row < 8)
	{
		column = 0;
		while (column < 8)
		{
			_putchar(a[row][column]);
				column++;
		}
		_putchar('\n');
		row++;
	}
}
