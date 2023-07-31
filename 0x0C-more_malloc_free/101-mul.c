#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string to measure
 * Return: length of s
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * _isdigit - checks if a character is a digit
 * @c: character to check
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _error - prints error message and exits
 */
void _error(void)
{
	char *msg = "Error\n";

	while (*msg)
		_putchar(*msg++);
	exit(98);
}

/**
 * _mul - multiplies two numbers in string format
 * @num1: first number
 * @num2: second number
 * Return: pointer to the result in string format
 */
char *_mul(char *num1, char *num2)
{
	int len1, len2, lenr, i, j, carry, digit;
	char *result;

	len1 = _strlen(num1);
	len2 = _strlen(num2);

	lenr = len1 + len2;
	result = malloc(sizeof(char) * (lenr + 1));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < lenr; i++)
		result[i] = '0';
	result[lenr] = '\0';

	for (i = len2 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len1 - 1; j >= 0; j--)
		{
			digit = (_mul(num2[i] - '0', num1[j] - '0') + carry +
					(result[i + j + 1] - '0'));
			result[i + j + 1] = (digit % 10) + '0';
			carry = digit / 10;
		}
		result[i + j + 1] += carry;
	}
	return (result);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, exit with status 98 on failure
 */
int main(int argc, char **argv)
{
	char *num1, *num2, *result;
	int i, j;

	if (argc != 3)
		_error();

	num1 = argv[1];
	num2 = argv[2];

	for (i = 0; num1[i]; i++)
		if (!_isdigit(num1[i]))
			_error();
	for (j = 0; num2[j]; j++)
		if (!_isdigit(num2[j]))
			_error();

	result = _mul(num1, num2);

	i = 0;
	while (result[i] == '0' && result[i + 1])
		i++;
	printf("%s\n", &result[i]);
	free(result);

}
