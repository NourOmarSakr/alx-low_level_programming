#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			int c1 = (int) ((i / 10) + '0');
			int c2 = (int) ((i % 10) + '0');
			int c3 = (int) ((j / 10) + '0');
			int c4 = (int) ((j % 10) + '0');

			putchar((char) c1);
			putchar((char) c2);
			putchar(' ');
			putchar((char) c3);
			putchar((char) c4);

			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
