#include <stdio.h>

/**
 * main - Prints the source file name.
 *
 * Return: 0
 *
 * Example:
 * main(); --> "main.c"
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
