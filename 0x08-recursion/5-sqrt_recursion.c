#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Description: This function uses recursion to fi
 * Return: The natural square root of n, or -1 if n does
 */

int _sqrt_recursion(int n)
{
	int check_sqrt(int x, int y);

	if (n < 0)
		return (-1);

	return (check_sqrt(n, 1));
}

/**
 *check_sqrt - Returns the natural square root of a number
 * @x: The number to find the square root of
 * @y: integer number
 *
 * Description: This function uses recursion to find th.
 * Return: The natural square root of n, or -1 if
 */

int check_sqrt(int x, int y)
{
	if (y == x)
		return (y);

	if (y * y > x)
		return (-1);

	return (check_sqrt(x, y + 1));
}
