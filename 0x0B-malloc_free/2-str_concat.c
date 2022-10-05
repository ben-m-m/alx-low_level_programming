#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - return length of a string
 *
 * @s: char type
 * Return:  length of string
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{

	}
	return (a);
}

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

/**
 * str_concat - allocates space for concantinated strings
 * @s1: string
 * @s2: string
 * Return: pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int size1, size2;

	if (si == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	ptr = malloc(sizeof(char) * ((size1 + size2) + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	_strncat(ptr, s1, size1);
	_strncat(ptr, s2, size2);
	ptr += '\0';
	return (ptr);
}
