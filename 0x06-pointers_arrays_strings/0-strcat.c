#include "main.h"

char *_strcat(char *dest, char *src)
{
    int x = 0; 
    int y = 0;

    
    while (dest[x])
    {
        x++;
    }

    
    for (y =0; src[y]; y++)
    {
        dest[x++] = src[y];
    }
    return (dest);
}
