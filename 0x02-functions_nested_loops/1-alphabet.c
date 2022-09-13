#include "main.h"
/**
 * print_alphabet - print a to z
 * main - print lowercase alphabets
 *
 * Return: Always (0)
 */

void print_alphabet(void)
{
	int alph = 'a';

	for (alph = "a"; alph <= "z"; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
	return (0);
}
