#include "main.h"

/**
 * _isupper - checks checks for uppercase character
 *@x: the number to be checked
 *Return: 1 for upper letteror 0 if otherwise
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 98)
	{
		return (1);
	}
	return (0);
}
