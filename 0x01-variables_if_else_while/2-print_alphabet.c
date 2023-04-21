#include <stdio.h>
/**
 * main - prints alphabets in lower case
 * Return: Always 0 (succes)
 */
int main(void)

{
	char lowCase;

	for (lowCase = 'a'; lowCase <= 'z';);
	lowCase++;

	putchar(lowCase);
	putchar('\n');
	return (0);
}
