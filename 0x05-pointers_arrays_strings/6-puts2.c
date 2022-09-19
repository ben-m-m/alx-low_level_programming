#include "main.h"
#include <stdio.h>
/**
 * puts2 - print every other character from 1
 * @str: input string
 * Return: Always (0)
 */

void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			putchar('\n');

			break;
		}

		if (count % 2 == 0)
		{
			putchar(str[count]);
		}

		count++;
	}
}
