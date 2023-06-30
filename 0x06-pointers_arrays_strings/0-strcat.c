#include "main.h"

char *_strcat(char *dest, char *src)
{
    int x = 0; /* index for dest */
    int y = 0; /* index for src */

    /* find the end of dest */
    while (dest[x] != '\0')
    {
        x++;
    }

    /* append src to dest */
    while (src[y] != '\0')
    {
        dest[x] = src[y];
        x++;
        y++;
    }

    /* add the null terminator */
    dest[x] = '\0';

    /* return the pointer to dest */
    return (dest);
}
