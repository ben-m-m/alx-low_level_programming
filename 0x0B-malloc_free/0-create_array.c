#include "main.h"
#include <stdlib.h>
/**
 * create_array -  creates an array of chars, and initializes it with a specific char
 * @size: array size
 * @c: char to be initialized with
 * Return: array pointer or null
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
