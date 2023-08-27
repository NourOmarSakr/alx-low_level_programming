#include "main.h"

/**
 * _print_rev_recursion - prints a string reversly, followed by a new line
 * @s: pointer to the string to print
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_print_rev_recursion(s);
	return(1);
}
