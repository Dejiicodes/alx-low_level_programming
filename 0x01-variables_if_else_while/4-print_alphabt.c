#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the lowercase alphabet, excluding 'e' and 'q',
 * followed by a newline.
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter = 'a'; // Start with 'a'

    while (letter <= 'z') // Loop from 'a' to 'z'
    {
        if (letter != 'e' && letter != 'q') // Check if the letter is not 'e' or 'q'
        {
            putchar(letter); // Print the current letter
        }

        letter++; // Move to the next letter
    }

    putchar('\n'); // Print a newline character after printing the alphabet

    return (0);
}

