#include "main.h"

/**
 * _strlen -  a function that returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int li = 0;

	while (*s != '\0')
	{
		li++;
		s++;
	}
	return (li);
}
