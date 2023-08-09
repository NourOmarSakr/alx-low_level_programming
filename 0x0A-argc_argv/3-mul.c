#include <stdio.h>
#include <stdlib.h>

/**
 * main - multipies two numbers
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0
 *
 */

int main(int argc, char *argv[])
{
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);
	int sum = x * y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}


	printf("%d\n", sum);
	return (0);
}
