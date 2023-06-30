#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: string input
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i;
	int j = 0;
	char temp;

	/* find string length without null */
	while (s[j] != '\0')
		j++;
	for (i = 0; i < j / 2 ; i++)
	{
		temp = s[i];
		s[i] = s[j - 1 - i];
		s[j - 1 - i] = temp;
	}
}
