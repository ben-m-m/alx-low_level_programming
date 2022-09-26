#include "main.h"
/**
 * _strchr - locates character
 * @s: input string
 * @c: character to find
 * Return: pointer to character
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x] != '\0' && s[x] != c)
	{
		x++;
	}
	if (s[x] == c)
	{
		return (&s[x]);
	}
	else
	{
		return (NULL);
	}
}
