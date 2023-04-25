#include "main.h"
/**
 * main - prints_putchar, followed by a new line
 * Return: Always 0 (succes)
 */
int main(void)
{
	char  a[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
	return (0);
}
