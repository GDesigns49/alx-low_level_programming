#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 * Return: 10 times of the numbers since 0 up to 14
 */

void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x < 14; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (y > 10)
			{
				_putchar(('y / 10') + '0');
			}
			else
			{
				_putchar((y % 10) + '0');
			}
		}
	_putchar('\n');
	}
}
