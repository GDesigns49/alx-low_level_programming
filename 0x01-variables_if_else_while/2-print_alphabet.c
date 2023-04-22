#include <stdio.h>
/**
* main - Prints the lowercase alphabet using putchar
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char lowCase;

	for (lowCase = 'a'; lowCase <= 'z';);
	lowCase++;
	{
		putchar(lowCase);
	}
	putchar('\n');
	return (0);
}
