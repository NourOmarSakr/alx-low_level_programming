#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	_puts_recursion("Puts with recursion");
	return (0);
}

void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		printf("%c", s[i]);
		i++;
	}
}
