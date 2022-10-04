#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strdup - returns pointer to duplicate string
 * @str: pointer to string
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
	char *s;
	int i = 0, j;

	if (!str)
	{
		return (NULL);
	}

	while (*(str + 1))
	{
		i++;
	}

	i++;
	s = malloc(sizeof(char) * i);

	if (s == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
