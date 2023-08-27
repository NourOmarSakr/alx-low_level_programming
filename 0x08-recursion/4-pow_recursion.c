#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: The base number
 * @y: The exponent
 *
 * Description: This function uses recursion to calculate the power of x by y.
 * It checks for the base case whe
 * Otherwise, it multiplies x by x raised to y - 1
 * Return: The value of x raised to the power of y, or -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
