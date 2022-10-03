#include "main.h"
/**
 * _strlen - shows length of string
 * @s: string parameter
 * Return: str length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
