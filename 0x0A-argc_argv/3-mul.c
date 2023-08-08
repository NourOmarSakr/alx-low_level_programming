#include <stdio.h>

/**
 * main - multipies two numbers
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x = argv[1];
	int y = argv[2];
	int sum = x * y;

	if (x || y == NULL)
	{
		printf("Error\n");
	} else
	{
		printf("%i\n", sum);
	}
}
