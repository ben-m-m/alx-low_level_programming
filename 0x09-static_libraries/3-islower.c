#include "main.h"
/**
 * _islower - finds lowercase alphabet
 *
 * @c: Parameter
 * Return: Always (0)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
