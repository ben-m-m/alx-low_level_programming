#include <stdio.h>
/**
 * main - single digits combination
 *
 * Return: Always (0)
 */

int main(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		putchar((d % 10) + '0');
		if (d == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

		putchar('\n');
		return (0);
}
