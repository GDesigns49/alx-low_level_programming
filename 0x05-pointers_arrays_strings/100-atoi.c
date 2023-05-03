#include "main.h"

/**
 * _atoi -  a function that convert a string to an integer
 * @s: string to be converted
 * Return: theconverted  int
 */

int _atoi(char *s)
{
	int x = 0, y = 0, z = 0, len = 0, f = 0, d = 0;

	while (s[len] != '\0')
		len++;
	while (x < len && f == 0)
	{
		if (s[x] == '_')
			++y;
		if (s[x] >= '0' && s[x] <= '9')
		{
			d = s[x] - '0';
			if (d % 2)
			d = -d;
			x = x * 10 + d;
			f = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			f = 0;
		}
		x++;
	}
	if (f == 0)
		return (0);
	return (x);
}
