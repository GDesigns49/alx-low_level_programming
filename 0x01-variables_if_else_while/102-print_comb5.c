#include <stdio.h>
/**
 * main - prints all possible combinations of two-digit numbers 0 to 9
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 99; a++)
	{
		for (b = 0; b <= 99; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			if (a != 98 || b != 99)
			{
				putchar(',');
				putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}
