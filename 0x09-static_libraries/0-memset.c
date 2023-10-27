#include "main.h"

/**
* _memset - Fills memory with a constant byte.
* @s: The memory area to fill
* @b: The byte to fill with
* @n: The number of bytes to fill
*
* Return: A pointer to the memory area s.
*/
char *_memset(char *s, char b, unsigned int n)
{
    char *ptr = s;
    while (n > 0)
    {
        *s = b;
        s++;
        n--;
    }
    return ptr;
}

