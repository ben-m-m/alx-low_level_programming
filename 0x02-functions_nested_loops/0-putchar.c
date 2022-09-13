#include <stdio.h>
#include "main.h"
/**
 * main - print _putchar
 *
 * return (0)
 */

int main(void)
{
	char c[8] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
	{
		_putchar(c[8]);
	}
	_putchar('\n');
	return (0);
}
