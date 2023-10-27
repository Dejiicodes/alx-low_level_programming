#include "main.h"

/**
 * _strcpy - Copies a string to a destination.
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
    char *original = dest;
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';  // Null-terminate the destination string
    return original;
}

