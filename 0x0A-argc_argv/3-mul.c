#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Program that takes two integers and prints the product
 * @argc: Number of args
 * @argv: the args
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
			j *= atoi(argv[i]);

		printf("%d\n", j);
	}

	return (0);
}
