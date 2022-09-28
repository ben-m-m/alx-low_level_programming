#include "main.h"
/**
 * prime_no - divides by divisor except even digits
 * @n: number to check
 * @div: divisor
 * Return: 1 if prime, 0 if not
 */

int prime_no(int n, int div)
{
	if (n == div)
		return (1);
	if (n % div == 0)
		return (0);
	return (prime_no(n, div + 1));
}
/**
 * is_prime_number - prints 1 if n is a prime number
 * @n: input int
 * Return: (1) or (0) if not
 */

int is_prime_number(int n);
{
	
	int div = 3;

	if (n % 2 == 0 || n < 2)

		return (0);

	if (n == 2)

		return (1);

	return (prime_no(n, div));

}
