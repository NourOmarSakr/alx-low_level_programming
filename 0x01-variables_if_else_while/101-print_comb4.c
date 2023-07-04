#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				int c1 = (int) (i + '0');
				int c2 = (int) (j + '0');
				int c3 = (int) (k + '0');

				putchar((char) c1);
				putchar((char) c2);
				putchar((char) c3);

				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
					putchar('\n');
				}
			}
		}
	}

	return (0);
}
