#include <stdio.h>
/**
*main - prints numbers in base 16
*Return: 0 if no error, non zero if error.
*/
int main(void)
{
	int i;
	char hexvals;

	for (i =0; i < 10; i++)
		putchar((i % 10) + '0');

	for (hexvals = 'a'; hexvals <= 'f'; hexvals++)
		putchar(hexvals);
	putchar('\n');
	return (0);
}
