#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase and uppercase
 * using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char lowercase_letter;
    char uppercase_letter;

    /* Print lowercase alphabet */
    for (lowercase_letter = 'a'; lowercase_letter <= 'z'; lowercase_letter++)
    {
        putchar(lowercase_letter);
    }

    /* Print uppercase alphabet */
    for (uppercase_letter = 'A'; uppercase_letter <= 'Z'; uppercase_letter++)
    {
        putchar(uppercase_letter);
    }

    putchar('\n');

    return (0);
}

