#include "main.h"

/**
 * rev_string -  a function that reverses a string
 * @s: Input String
 * Return: Reversed String
 */

void rev_string(char *s)
{
	char rev = s[0];
	int c = 0;
	int x;

	while (s[c] != '\0')
		c++;
	{
		c--;
		rev = s[x];
		s[x] = s[c];
		s[c] = rev;
	}
}

