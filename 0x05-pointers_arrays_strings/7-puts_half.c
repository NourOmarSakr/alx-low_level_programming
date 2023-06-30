#include "main.h"
/**
 * puts_half - prints second half of the string
 *
 * @str: input
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		j = i / 2;
		i = i - 1;
	}
	else
	{
		j = (i - 1) / 2;
		i = i - 1;
		j = j + 1;
	}
	while (j <= i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
