#include "main.h"
/**
 * _abs - absolute value of a value
 * @c: parameter
 *
 * Return: int
 */

int _abs(int c)
{
	if (c > 0)
	{
		c = +c;
	}
	else
	{
		c = -c;
	}
	return (c);
}
