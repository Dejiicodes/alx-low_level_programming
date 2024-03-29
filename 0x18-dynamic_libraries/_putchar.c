#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Return: On success, the character is printed, and 1 is returned.
 * On error, -1 is returned.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
