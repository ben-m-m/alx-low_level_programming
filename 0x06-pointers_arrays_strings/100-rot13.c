#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 * Return: encoded string
 */

char *rot13(char *s)
{
	int stringCount, rotate;

	char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	stringCount = 0;
	while (s[stringCount] != '\0')
	{
		rotate = 0;
		while (letter[rotate] != '\0')
		{
			if (s[stringCount] == letter[rotate])
			{
				s[stringCount] = rot[rotate];
				break;
			}
			rotate++;
		}
		stringCount++;
	}
	return (s);
}
