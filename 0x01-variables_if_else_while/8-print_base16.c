#include <stdio.h>
/**
 * main - hexadecimals
 *
 * Return: Always (0)
 *
 */

int main(void)
{
	int d;
	char a;

	for (d = 0; d < 10; d++)
	{
		putchar((d % 10) + '0');
	}

	for (a = 'a'; a < 'g'; a++)
	{
		putchar('a');
	}
	putchar('\n');
	return (0);
}
