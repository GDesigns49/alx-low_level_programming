#include "main.h"

/**
 * prints integer numbers - returns the largest of 3 numbers
 * @x: first integer
 * @y: second integer
 * @z: third integer
 * Return: largest number
 */

int largest_number(int x, int y, int z)
{
	int largest;

	if (x > y && z > x)
	{
		largest = x;
	}
	else if (x > y && z > a)
	{
		largest = z;
	}
	else if (y > z)
	{
		largest = y;
	}
	else
	{
		largest = z;
	}
	return (largest);
}
