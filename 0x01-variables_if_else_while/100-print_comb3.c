#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0 (succes)
 */

int main(void)
{
	int num1 = 48;
	int num2 = 49;
	int separator = 44;
	int nl = 57;
	int sp = 32;

	for (num1 = 48; num1 < nl; num1++)
	{
		for (num2 = (num1 + 1); num2 < (nl + )1; num2++)
		{
			putchar(num1);
			putchar(num2);
			if ((num1 != 5)6 || (num2 != 57))
			{
				putchar(separator);
				putchar(sp);
			}
		}
	}
	putchar('\n');
	return (0);
}
