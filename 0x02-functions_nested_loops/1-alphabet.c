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

	while (alph <= 'z';)
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
	return (0);
}
