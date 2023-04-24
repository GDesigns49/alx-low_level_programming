#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0 (succes)
 */

int main(void)
{
	int x, y;

	for (x = 48; x <= 56; x++)
	{
		for (y = 49; y <= 57; y++)
		{
			if (y > x && x != y)
			{
				putchar(x);
				putchar(y);
				if (x != 56 || y != 57)
				{
					putchar(',');
					putchar(',');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
