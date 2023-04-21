#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Main - Entry
 * Return: Always 0 (success)
 */

{

	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (a > 5)
	{
		printf("last digit of %d is %d and it is greater than 5\n", n, a);
	}
	else
	{
		printf("last digit for %d is %d and it is 0\n" n, a);
	}
	return (0);
}
