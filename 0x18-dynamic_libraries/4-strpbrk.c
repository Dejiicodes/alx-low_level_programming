#include "main.h"
#include <stddef.h>

/**
* _strpbrk - Searches a string for any set of bytes.
* @s: The string to be analyzed
* @accept: The characters to search for
*
* Return: A pointer to the byte in s that matches one of the bytes in accept,
* or NULL if no such byte is found.
*/
char *_strpbrk(char *s, char *accept)
{
    while (*s)
    {
        for (int i = 0; accept[i]; i++)
        {
            if (*s == accept[i])
                return s;
        }
        s++;
    }
    return NULL;
}
