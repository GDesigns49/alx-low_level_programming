#include "main.h"

/**
 *print_rev -  a function that prints a string, in reverse,
 *followed by a new line
 * @s: string
 * Return: Always 0 (success)
 */

void print_rev(char *s)
{
	int li = 0;
	int x;

	while (*s != '\0')
	{
		li++;
		s++;
	}
	s--;
	for (x = li; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
