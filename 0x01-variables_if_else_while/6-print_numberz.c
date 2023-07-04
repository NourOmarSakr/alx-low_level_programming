#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char c = i + '0';

		putchar(c);
	}
	putchar('\n');

	return (0);
}
