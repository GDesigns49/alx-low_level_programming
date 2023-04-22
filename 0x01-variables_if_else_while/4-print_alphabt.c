#include <stdio.h>
/**
*main - prints the alphabets in lowercase
*followed by a new line, except q and e
*Returns: Always 0 (success)
*/
int main(void)
{
	char lcase;

	for (lcase = 'a'; lcase <= 'z'; lcase++)
	{
		if (lcase != 'e' && lcase != 'q')
			putchar(lcase);
	}
	putchar('\n');
	return (0);
}
