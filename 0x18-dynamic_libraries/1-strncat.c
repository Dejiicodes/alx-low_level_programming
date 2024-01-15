#include "main.h"

/**
* _strncat - Concatenates n characters of a string to another.
* @dest: The destination string
* @src: The source string to append
* @n: The number of characters to append
*
* Return: A pointer to the resulting string.
*/
char *_strncat(char *dest, char *src, int n)
{
    char *original = dest;
    while (*dest)
        dest++;
    while (*src && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    *dest = '\0';  // Null-terminate the destination string
    return original;
}

