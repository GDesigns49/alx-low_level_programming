#include <stdio.h>
#include <stdio.h>
#include <stdio.h>
/**
 * main - Prints when number is positive,  negative or 0
 * Retuuen: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	prinf("%d is positive\n", n);
	else if (n == 0)
	printf("%d is zero\n", n);
	else
	printf("%d negative\n", n);
	return (0);
}
