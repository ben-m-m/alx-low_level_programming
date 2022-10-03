#include "main.h"
#include <stdio.h>
/**
 * _strncat - concantenates two strings
 * @dest: destination pointer
 * @src: source pointer
 * @n: bytes to concantanate
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int length, x;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}

	for (x = 0; x < n && src[x] != '\0'; x++, length++)
	{
		dest[length] = src[x];
	}

	dest[length] = '\0';
	return (dest);
}
