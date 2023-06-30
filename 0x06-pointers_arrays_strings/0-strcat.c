
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    int i = 0, j = 0;

    /* find the end of dest */
    while (dest[i] != '\0')
    {
        i++;
    }

    /* append src to dest */
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    /* add the null terminator */
    dest[i] = '\0';

    return (dest);
}
