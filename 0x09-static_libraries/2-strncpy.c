#include "main.h"

/**
* _strncpy - Copies up to n characters from one string to another.
* @dest: The destination string
* @src: The source string
* @n: The maximum number of characters to copy
*
* Return: A pointer to the destination string.
*/
char *_strncpy(char *dest, char *src, int n)
{
    char *original = dest;
    while (*src && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    while (n > 0)
    {
        *dest = '\0';  // Fill the remaining characters with null bytes
        dest++;
        n--;
    }
    return original;
}

