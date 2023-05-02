#include "main.h"

/**
 * puts_half -  a function that prints half of a string,
 * followed by a new line
 *@str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	int x, y, li;

	li = 0;

	for (x = 0; str[x] != '\0'; x++)
		li++;
	y = (li / 2);
	if ((li % 2) == 1)
		y = ((li + 1) / 2);
	for (x = y; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
