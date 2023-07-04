#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}
	for (j = 0; j < size; j++)
	{
		sum2 += a[j * size + (size - 1 - j)];
	}

	print_number(sum1);
	_putchar(',');
	_putchar(' ');
	print_number(sum2);
	_putchar('\n');
}

void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
	{
		m = n;
	}
	if (m / 10)
		print_number(m / 10);
	_putchar((m % 10) + '0');
}
