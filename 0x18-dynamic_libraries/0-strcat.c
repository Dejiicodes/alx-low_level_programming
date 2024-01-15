#include "main.h"

/**
* _strcat - Concatenates two strings.
* @dest: The destination string
* @src: The source string to append
*
* Return: A pointer to the resulting string.
*/
char *_strcat(char *dest, char *src)
{
    char *original = dest;
    while (*dest)
        dest++;
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';  // Null-terminate the destination string
    return original;
}

