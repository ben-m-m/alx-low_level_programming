#include <stdio.h>
/**
 * main - base (10) single digits
 *
 * Return: Always (0)
 *
 */

int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
	}
	putchar('\n');
	return (0);
}
