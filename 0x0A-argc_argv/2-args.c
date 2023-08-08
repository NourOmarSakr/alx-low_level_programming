#include <stdio.h>

/**
 * main - prints the name of the file
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0
 */
int main(int argc, char argv[])
{
	int i;

	for (i = argc - 1; i >= 0; i--)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
