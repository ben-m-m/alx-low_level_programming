#include <stdio.h>
/**
 * main - prints number of arguments passed into it
 * @argc: int
 * @argv: array
 * Return: (0)
 */

int main(int argc, char const argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
