#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}

/**
 * _puts_recursion - prints a string followed by a newline using recursion
 * @s: the string to print
 */
void _puts_recursion(char *s)
{
    /* base case: if the string is empty, print a newline and return */
    if (*s == '\0')
    {
        printf("\n");
        return;
    }
    /* recursive case: print the first character and call the function again with the rest of the string */
    printf("%c", *s);
    _puts_recursion(s + 1);
}
