#include "main.h"

/**
 * is_separator - checks if a character is a separator of words
 * @c: the character to check
 * Return: 1 if true, 0 if false
 */
int is_separator(char c)
{
	char sep[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; sep[i] != '\0'; i++)
	{
		if (c == sep[i])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @s: the string to capitalize
 * Return: a pointer to the resulting string
 */
char *cap_string(char *s)
{
	int i = 0, cap = 1;

	while (s[i] != '\0')
	{
		if (is_separator(s[i]))
		{
			cap = 1;
		}
		else if (s[i] >= 'a' && s[i] <= 'z' && cap == 1)
		{
			s[i] -= ('a' - 'A');
			cap = 0;
		}
		else if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			cap = 0;
		}
		/* else, do nothing */
		i++;
	}

	return (s);
}
