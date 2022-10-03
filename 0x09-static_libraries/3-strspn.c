#include "main.h"
/**
 * _strspn - Return number of bytes of s which consist of bytes from accept
 * @s: string to check
 * @accept: match required
 * Return: bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, sel;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		sel = 1;

		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if (*(s + x) == *(accept + y))
			{
				sel = 0;

				break;
			}
		}
		if (sel == 1)
		{
			break;
		}
	}
	return (x);
}
