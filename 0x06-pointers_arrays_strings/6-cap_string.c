#include "main.h"

/**
 * cap_string - checks if a character is a separator of words
 * @str: the character to check
 * Return: 1 if true, 0 if false
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++
			if (str[index - 1] == ' ' ||
			str[index - 1] == '\t' ||
			str[index - 1] == '\n' ||
			str[index - 1] == ',' ||
			str[index - 1] == ';' ||
			str[index - 1] == '.' ||
			str[index - 1] == '!' ||
			str[index - 1] == '?' ||
			str[index - 1] == '"' ||
			str[index - 1] == ')' ||
			str[index - 1] == '(' ||
			str[index - 1] == '}' ||
			str[index - 1] == '{' || index == 0)
			{
				str[index] -= 32;
				index++;
			}
		return (str);
}
