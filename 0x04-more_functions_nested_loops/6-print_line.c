#include "main.h"
/**
 * print_line - prints __
 * @n: times _ is printed
 * Return: Always (0)
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(98);
	}
	_putchar('\n');
}
