#include "main.h"
/**
 * string_toupper - change string from lower to uppercase
 * @a: string pointer
 * Return: uppercase string pointer
 */

char *string_toupper(char *a)
{
	int length;

	length = 0;
	while (a[length] != '\0')
	{
		if (a[length] >= 97 && a[length] <= 122)
		{
			a[length] = a[length] - 32;
		}
		length++;
	}
	return (a);
}
