#include <stdio.h>
/**
*Main - prints alphabets in lowercasee and accept q + p and c
*Returns: Always 0 (success)
*/
int main(void)
{
	char lowerAlph;

	for (lowerAlph = 'a'; lowerAlph <= 'z';	lowerAlph++)
	{
		if (lowerAlph != 'e' && lowerAlph != 'q')
			putchar(lowerAlph);
	}
	putchar('\n');
	return (0);
}
