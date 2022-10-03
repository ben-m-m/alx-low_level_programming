#include "main.h"
#define NULL 0
/**
 * _strstr - points to the beginning of the located substring
 * @haystack: string to search
 * @needle: target substring
 * Return: pointer at first occurence
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, x, y;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			x = i, y = 0;
			while (needle[y] != '\0')
			{
				if (haystack[x] == needle[y])
				{
					x++, y++;
				} else
				{
					break;
				}
			}
			if (needle[y] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
