#include <stdio.h>

/**
* main - prints the alphabets in lowercase
* followed by a new line, except q and e
* Return: Always 0 (success)
*/
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && lcase != 'q')
			putchar(la);
	}

	putchar('\n');
	return (0);
}
