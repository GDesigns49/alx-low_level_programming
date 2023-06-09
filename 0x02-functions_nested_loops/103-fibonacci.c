#include <stdio.h>
/**
* main - prints the sum of  even-valued terms followed by a new line
* fibonacci numbers
* Return: Always 0 (success)
*/
int main(void)
{
	long int n1, n2, fn, afn;

	n1 = 1;
	n2 = 2;
	fn = afn = 0;
	while (fn <= 4000000)
	{
		fn = n1 + n2;
		n1 = n2;
		n2 = fn;
		if ((n1 % 2) == 0)
		{
			afn += n1;
		}
	}
	printf("%ld\n", afn);
	return (0);
}
