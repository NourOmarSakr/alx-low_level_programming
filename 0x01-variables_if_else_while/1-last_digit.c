#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */

int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	x = n % 10;

	if (x > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last);
	} else if (x < 5 && last != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last);
	} else
	{
		printf("Last digit of %d is %d and is 0", n, last);
	}
	return (0);
}
