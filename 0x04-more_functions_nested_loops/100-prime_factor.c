#include "main.h"
#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143,
 * followed by a new line
 * Return: Always 0 (success)
 */

int main(void)

{
	long x, maxf;
	long num = 612852475143;
	double square = sqrt(num);

	for (x = 1; x <= square; x++)
	{
		if (num % x == 0)
		{
			maxf = num / x;
		}
	}
	printf("%d\n", maxf);
	return (0);
}
