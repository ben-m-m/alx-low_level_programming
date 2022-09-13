#include "main.h"
/**
 * print_alphabet_x10 - (10) alphabet lines
 *
 * Return: Always (0)
 */

void print_alphabet_x10(void)
{
	int alph;
	int num;

	for (num = 1; num <= 10; num++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}

}
