#include "main.h"
/**
 * *_strcat - append src to dest overwritting \0
 * @src: source string
 * @dest: destination
 * Return: Always (0)
 */

char *_strcat(char *dest, char *src)
{
	int length, x;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (x = 0; src[x] != '\0'; x++, length++)
	{
		dest[length] = src[x];
	}

	dest[length] = '\0';
	return (dest);
}
