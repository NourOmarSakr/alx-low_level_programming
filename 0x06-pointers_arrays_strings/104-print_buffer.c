#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: the buffer to print
 * @size: the size of the buffer
 */
void print_buffer(char *b, int size)
{
	int i, j, k;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; j += 2)
		{
			if (j < size)
				printf("%02x%02x ", b[j], b[j + 1]);
			else
				printf("     ");
		}

		for (k = i; k < i + 10; k++)
		{
			if (k < size && b[k] >= ' ' && b[k] <= '~')
				printf("%c", b[k]);
			else
				printf(".");
		}
		printf("\n");
	}
}
