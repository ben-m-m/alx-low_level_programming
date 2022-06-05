#include <stdio.h>

/**
 * main - single digit numbers of base 10 starting from 0
 * You are not allowed to use any variable of type char
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar("\n");

	return (0);
}
