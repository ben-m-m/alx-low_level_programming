#include "main.h"
/**
 * _puts - print string to stdout
 * @str: string parameter
 * Return: Always (0)
 */

void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
