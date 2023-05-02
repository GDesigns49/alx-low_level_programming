#include "main.h"

/**
 * rev_string -  a function that reverses a string
 * @s: Input String
 * Return: Reversed String
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;
	{
		counter--;
		rev = s[i];
		s[x] = s[counter];
		s[counter] = rev;
	}
}

