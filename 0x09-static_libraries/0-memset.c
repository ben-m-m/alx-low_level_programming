#include "main.h"
/**
 * _memset - fills first n bytes of memory pointed to by s with constant byte b
 * @n: bytes of memory
 * @s: input pointer
 * @b: constant byte
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n; /*accept positive sizes */


	if (size > 0)
	{
		int x;

		for (x = 0; x < size; x++)
		{
			s[x] = b;
		}

	}
	return (s);
}
