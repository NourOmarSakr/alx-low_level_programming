#include "main.h"

/**
 * _puts - prints a string followed by an empty line
 * @str: string input
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
