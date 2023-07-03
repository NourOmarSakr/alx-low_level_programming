#include "main.h"

/**
 * _strspn - gets input
 * @s: input
 * @accept: input
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 100 ; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
