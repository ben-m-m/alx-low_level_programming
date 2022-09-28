#include "main.h"
/**
 * sqrRoot - find square root of n
 * @n: input int
 * @root: test root
 * Return: int
 */

int sqrRoot(int n, int root)
{
	if (root * root > n)
	{
		return (-1);
	}
	else if (root * root == n)
	{
		return (root);
	}
	else
	{
		return (sqrRoot(n, root + 1));
	}
}

/**
 * _sqrt_recursion - find natural root of n
 * @n: input int
 * Return: root int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrRoot(n, 0));
}
