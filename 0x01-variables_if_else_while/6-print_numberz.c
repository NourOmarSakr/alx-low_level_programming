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
		int c = (int) (i + '0');

		putchar((char) c);
	}

	putchar('\n');

	return (0);
}
