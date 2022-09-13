#include "main.h"
/**
 * main - print _putchar
 *
 * Return: Always (0)
 */

int main(void)
{
	char ch[8] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
	{
		_putchar(ch[x]);
	}

		_putchar('\n');
	return (0);
}
