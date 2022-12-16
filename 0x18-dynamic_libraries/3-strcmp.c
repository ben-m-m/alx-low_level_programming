#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string pointer
 * @s2: second string pointer
 * Return: 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int counter, cmp;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	cmp = s1[counter] - s2[counter];
	return (cmp);
}
