#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents, coins, i;
	int values[] = {25, 10, 5, 2, 1}; /* array of coin values */

	if (argc != 2) /* check if the number of arguments is valid */
	{
	printf("Error\n");
	return (1);
	}

	cents = atoi(argv[1]); /* convert the argument to an integer */
	coins = 0;

	if (cents > 0) /* only process positive amounts */
	{
		for (i = 0; i < 5; i++) /* loop through the coin values */
		{
			coins += cents / values[i]; /* add the number of coins of this value */
			cents %= values[i]; /* update the remaining cents */
		}
	}

	printf("%d\n", coins); /* print the result */
	return (0);
}
